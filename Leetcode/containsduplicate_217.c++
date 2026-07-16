#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int x : nums) {
            if (s.find(x) != s.end())
                return true;

            s.insert(x);
        }

        return false;
    }
};

int main() {

    vector<int> arr = {1,2,3,1};
    Solution obj;
    bool value = obj.containsDuplicate(arr);
    string ans= value==0 ? "false" : "true";
    cout << "\nDoes Array contains dupliactes ? ANS- " << ans;
    cout << endl;

    return 0;
}

