/*
Basic idea is
To get prime factors of a number
1)intially all spf[i]=i
2)later we mark all the spf to their smallest prime factor
3)to compute we divide n with spf[n] till n!=1
and later return the count using 
*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> computeSPF(int n){
    vector<int> spf(n+1);
    for(int i=1;i<=n;i++)
    spf[i]=i;

    for(int i=2;i*i<=n;i++){
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

int countDiv(int n,vector<int> spf){
    map<int,int>freq;
    while(n!=1){
        freq[spf[n]]++;
        n/=spf[n];
    }
    int div=1;
    for(auto i:freq){
        div*=(i.second+1);
    }
    return div;
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    vector<int> spf = computeSPF(n);
    int res=countDiv(n,spf);
    cout<<res;
    return 0;
}