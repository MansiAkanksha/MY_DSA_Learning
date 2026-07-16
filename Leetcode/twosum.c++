#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0; i < n;i++){
            int x=nums[i];
            int y=target-x;
            if(m.find(y)!=m.end()){
                return {i,m[y]};
            }
            m[x]=i;
        }
        return {};
    }
};

int main() {

    vector<int> arr = {2,7,11,15};
    int target=9;
    Solution obj;
    vector<int> ans = obj.twoSum(arr,target);

    cout << "\nThe solution is \n";

    for(int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}

