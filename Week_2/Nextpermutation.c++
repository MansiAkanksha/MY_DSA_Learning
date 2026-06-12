#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size(), i = n - 2;

        while (i >= 0 && arr[i] >= arr[i + 1])
            i--;

        if (i >= 0) {
            int j = n - 1;
            while (arr[j] <= arr[i])
                j--;

            swap(arr[i], arr[j]);
        }

        reverse(arr.begin() + i + 1, arr.end());
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.nextPermutation(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}