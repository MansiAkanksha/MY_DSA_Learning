#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// Refined version of my solution
    int pivotIndex(vector<int>& nums) {
        int left = 0, right = 0, sum = 0;

        for (int x : nums)
            sum += x;

        for (int i = 0; i < nums.size(); i++) {
            right = sum - left - nums[i];
            if (left == right) 
                return i;
            left += nums[i];
        }
        return -1;
    }
    // My solution
    // int pivotIndex(vector<int>& nums) {
    //     int left = 0;
    //     int sum = 0;

    //     for (int x : nums) {
    //         sum += x;
    //     }

    //     for (int i = 0; i < nums.size(); i++) {
    //         if (left == sum - left - nums[i]) { // if(2*left - sum + nums[i] == 0)
    //             return i;
    //         }

    //         left += nums[i];
    //     }

    //     return -1;
    // }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 7, 3, 6, 5, 6};

    cout << solution.pivotIndex(nums) << endl;

    return 0;
}
