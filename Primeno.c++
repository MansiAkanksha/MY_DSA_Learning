#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    bool isPrime=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}