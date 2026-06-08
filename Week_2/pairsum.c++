#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> constructArr(vector<int>& arr) {
        int m = arr.size();
        int n = 2;

        while (n * (n - 1) / 2 < m) {
            n++;
        }

        vector<int> res(n);

        res[0] = (arr[0] + arr[1] - arr[n - 1]) / 2;

        for (int i = 0; i < n - 1; i++) {
            res[i + 1] = arr[i] - res[0];
        }

        return res;
    }
};

int main() {
    vector<int> arr = {3,4,5};

    Solution obj;
    vector<int> result = obj.constructArr(arr);

    cout << "Constructed array: ";
    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}