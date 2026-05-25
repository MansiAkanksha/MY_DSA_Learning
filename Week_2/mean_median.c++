#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={1,2,3,3,2,1};
    int sum=0,n=arr.size(),median;
    sort(arr.begin(),arr.end());
    for(int x:arr){
        sum+=x;
    }
    if(n&1==1)//odd
        median=arr[n/2];
    else
        median=(arr[n/2 -1]+arr[n/2])/2;
    cout<<"Mean = "<<(sum/n) <<endl << "Median = "<< median<<endl;
    return 0;
}