#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int cand = -1, count = 0;

        // Boyer-Moore Voting Algorithm
        for (int x : arr) {
            if (count == 0)
                cand = x;

            if (x == cand)
                count++;
            else
                count--;
        }

        // Verify candidate
        int freq = 0;
        for (int x : arr) {
            if (x == cand)
                freq++;
        }

        return (freq > arr.size() / 2) ? cand : -1;
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
    int result = obj.majorityElement(arr);

    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element found" << endl;

    return 0;
}