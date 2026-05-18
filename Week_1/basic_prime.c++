#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"\nEnter n : ";
    cin>>n;
    if(n==0||n==1){
        cout<<"\n"<< n <<" is not a Prime Number.";
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"\n"<< n <<" is not a Prime Number.";
            return 0;
        }
    }
    cout<<"\n"<< n <<" is a Prime Number.";
    return 0;
}