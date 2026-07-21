#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        vector<vector<int>> res;
        unordered_map<int, int> m;

        // Count frequency
        for (int x : arr) {
            m[x]++;
        }

        // Store result
        for (auto it : m) {
            res.push_back({it.first, it.second});
        }

        return res;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {1, 2, 2, 3, 1, 2};

    vector<vector<int>> result = obj.countFreq(arr);

    cout << "Element : Frequency" << endl;
    for (auto &v : result) {
        cout << v[0] << " : " << v[1] << endl;
    }

    return 0;
}