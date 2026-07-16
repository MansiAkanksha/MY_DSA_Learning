#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;  

        for (int i = 0; i < nums.size(); i++) {
            if (m.find(nums[i]) != m.end()) {
                if (i - m[nums[i]] <= k)
                    return true;
            }
            m[nums[i]] = i;
        }

        return false;
    }
};

int main() {

    vector<int> arr = {1,2,3,1};
    int k=3;
    Solution obj;
    bool value = obj.containsNearbyDuplicate(arr,k);
    string ans= value==0 ? "false" : "true";
    cout << "\nDoes Array contains dupliactes where abs(i-j)<=k ? ANS- " << ans;
    cout << endl;

    return 0;
}

