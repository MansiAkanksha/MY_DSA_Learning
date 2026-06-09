#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubarraySum(vector<int>& arr) {
        long long sum = 0, maxsum = INT_MIN;

        for (int x : arr) {
            sum += x;
            maxsum = max(sum, maxsum);

            if (sum < 0)
                sum = 0;
        }

        return maxsum;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    cout << "Maximum Subarray Sum = " << obj.maxSubarraySum(arr) << endl;

    return 0;
}