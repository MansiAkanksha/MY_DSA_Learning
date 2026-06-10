#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int, int> freq;
        int n = arr.size();

        for (int x : arr) {
            freq[x]++;
        }

        for (auto it : freq) {
            if (it.second > n / 2) {
                return it.first;
            }
        }

        return -1;
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

    cout << "Majority Element: " << result << endl;

    return 0;
}