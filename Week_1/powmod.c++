#include<iostream>
using namespace std;

int powMod(int base,int exp,int modulus){
    int res=1;
    while(exp>=1){
        // if n is odd
        if(exp&1){
            res=(res*base)%modulus;
            exp--;
        }
        // if n is even
        else{
            base=(base*base)%modulus;
            exp/=2;
        }
    }
    return res;
}

int main(){
    cout<<powMod(3,3,4);
    return 0;
}