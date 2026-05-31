#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotatearrayclockwise_or_rightrotation(vector<int> arr,int k){
    int n=arr.size();
    if(k==0){
        for(int x:arr)
            cout<< x << " ";
        return;
    }
    k=k%n;
    // Step-1 Reverse entire array
    reverse(arr.begin(),arr.end());
    // Step-2 Reverse the array from index k till end
    reverse(arr.begin()+k,arr.end());
    // Step-3 Reverse the array from starting index  till k
    reverse(arr.begin(),arr.begin()+k);
    for(int x:arr)
        cout<< x <<" ";
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int k=0;
    rotatearrayclockwise_or_rightrotation(arr,k);
}