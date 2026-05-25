#include<iostream>
#include<vector>
// #include<unordered_map>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,5,4,3,2,5,5,5,5,5,5,2,2,2,3};
    int n=arr.size();
    map<int,int> m;
    // unordered_map<int,int> m;
    vector<int> res;
    for(int x:arr)
        m[x]++;
    for(auto it:m){
        if(it.second>=2)
            res.push_back(it.first);
    }
    cout<<"\nDuplicate elements are : \n";
    for(int x:res)
        cout << x << " ";
    return 0;
}