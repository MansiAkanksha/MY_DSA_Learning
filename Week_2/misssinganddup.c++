#include<iostream>
#include<vector>
// #include<unordered_map>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    // vector<int> arr={2,2};// missing- 1 and dup-2
    // vector<int> arr={1,2};// no missing and dup
    vector<int> arr={3,3,3,2,1};// missing- 4 and 5 and dup-3
    vector<int> res;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    //Step-1 duplicate 
    map<int,int> m;
    // unordered_map<int,int> m;
    for(int x:arr)
        m[x]++;
    for(auto it:m){
        if(it.second>=2)
            res.push_back(it.first);
    }
    //Step-2 missing
    int j=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=j){
            res.push_back(j++);
        }
        else
            j++;
    }

    cout<<"\nDuplicate and Missing elements are : \n";
    for(int x:res)
        cout << x << " ";
    return 0;
}