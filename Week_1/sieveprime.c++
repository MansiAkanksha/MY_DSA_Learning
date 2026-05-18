/*
Basic idea is
1)Mark all numbers as primes.
2)start from 2
3)Mark all multiples of 2 as not prime and move to next 
and repeat
*/
#include<iostream>
#include<vector>

using namespace std;

vector<int> sieve(int n){
    vector<bool>prime(n+1,true);
    for(int p=2;p*p<=n;p++){
        if(prime[p]){
            for(int i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }
    }
    vector<int> res;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            res.push_back(i);
        }
    }
    return res;
}
int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    vector<int> result=sieve(n);
    cout<<"\nPrime numbers till " << n<<" are : \n";
    for(auto i:result){
        cout<< i << " ";
    }
    return 0;
}