/*
Basic idea is
To get prime factors of a number
1)intially all spf[i]=i
2)later we mark all the spf to their smallest prime factor
3)to compute we divide the spf[n] till n>=1
*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> computeSPF(int n){
    vector<int> spf(n+1);
    for(int i=1;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i*i<n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    return spf;
}

void factors(int n,vector<int>& s){
    while(n!=1){
        cout<<s[n]<<' ';
        n/=s[n];
    }
}

int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    vector<int> s=computeSPF(n);
    cout<<"\nFactors of "<< n <<" are : \n";
    factors(n,s);
    return 0;
}