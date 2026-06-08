#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSum(vector<int>& arr) {
        int n = arr.size();
        long long total_sum = 0;
        long long curr_sum = 0;

        // Calculate total sum and initial rotation sum
        for (int i = 0; i < n; i++) {
            total_sum += arr[i];
            curr_sum += 1LL * i * arr[i];
        }

        long long ans = curr_sum;

        // Calculate rotation sums efficiently
        for (int i = n - 1; i >= 0; i--) {
            curr_sum = curr_sum + total_sum - 1LL * n * arr[i];
            ans = max(ans, curr_sum);
        }

        return (int)ans;
    }
};

int main() {
    vector<int> arr = {8, 3, 1, 2};

    Solution obj;
    int result = obj.maxSum(arr);

    cout << "Maximum sum among all rotations: " << result << endl;

    return 0;
}