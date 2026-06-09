#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubarraySum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0, maxsum = INT_MIN;
        int index_start = 0, index_end = 0, start = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            if (sum > maxsum) {
                maxsum = sum;
                index_start = start;
                index_end = i;
            }

            if (sum < 0) {
                sum = 0;
                start = i + 1;
            }
        }

        cout << "Maximum Subarray: ";
        for (int i = index_start; i <= index_end; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

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
    cout << "Maximum Subarray Sum = "
         << obj.maxSubarraySum(arr) << endl;

    return 0;
}