/*
Basic idea is
To find prime factors of a number
1) check till sqrt of n.
2) later remove factors of 2 seperately
3) proceed with odd numbers from i=3 (i+=2) till sqrt of n
if n>1 then n is prime
*/
#include<iostream>
using namespace std;

void primeFactor(int n){
    while(n%2 == 0){
        cout<<2<<"\t";
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            cout<< i << "\t";
            n/=i;
        }
    }
    if(n>1)
    cout<<n;
}

int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    cout<<"\nPrime Factors of "<< n <<" :\n";
    primeFactor(n);
    return 0;
}

