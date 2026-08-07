#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, n = s.size(), ans = 0;
        unordered_map<char, int> freq;

        for (int right = 0; right < n; right++) {
            freq[s[right]]++;

            while (freq[s[right]] > 1) {
                freq[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Length of the longest substring without repeating characters: "
         << obj.lengthOfLongestSubstring(s) << endl;

    return 0;
}