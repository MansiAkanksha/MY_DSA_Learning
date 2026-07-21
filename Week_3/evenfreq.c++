#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    int count(string& s) {
        unordered_map<char, int> m;
        int count = 0;

        // Count frequency of each character
        for (char c : s)
            m[c]++;

        // Count characters having even frequency
        for (auto it : m) {
            if (it.second % 2 == 0)
                count++;
        }

        return count;
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = obj.count(s);

    cout << "Characters with even frequency: " << result << endl;

    return 0;
}