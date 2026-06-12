#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxConsecBits(vector<int> &arr) {
        int n = arr.size(), c = 1, count = 1;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1] || count < 0)
                c++;
            else
                c = 1;

            count = max(c, count);
        }
        return count;
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
    cout << obj.maxConsecBits(arr) << endl;

    return 0;
}