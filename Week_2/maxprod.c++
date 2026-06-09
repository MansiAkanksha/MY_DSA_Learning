#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        long long ans = arr[0];
        long long maxend = arr[0];
        long long minend = arr[0];

        int n = arr.size();

        for (int i = 1; i < n; i++) {
            if (arr[i] < 0)
                swap(maxend, minend);

            maxend = max((long long)arr[i], maxend * arr[i]);
            minend = min((long long)arr[i], minend * arr[i]);

            ans = max(ans, maxend);
        }

        return ans;
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

    cout << "Array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    cout << "Maximum Product Subarray = "
         << obj.maxProduct(arr) << endl;

    return 0;
}