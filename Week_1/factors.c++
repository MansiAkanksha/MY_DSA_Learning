#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"\nEnter n : ";
    cin>>n;
    cout<<"\nFactors of  " << n << "\n";
    for(int i=1;i*i<=n;i++){
        if(n%i==0)
        cout<<i << "\t" << n/i <<"\n";
    }
    return 0;
}