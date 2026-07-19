#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;
        unordered_map<char,int> ms,mt;
        for(char x : s)
            ms[x]++;
        for(char x : t)
            mt[x]++;

        return ms == mt;
    }
};

// This is optimal version because of using only one map instead of 2 maps
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.size() != t.size())
//             return false;

//         unordered_map<char, int> mp;

//         for (int i = 0; i < s.size(); i++) {
//             mp[s[i]]++;
//             mp[t[i]]--;
//         }

//         for (auto it : mp) {
//             if (it.second != 0)
//                 return false;
//         }

//         return true;
//     }
// };


// This is optimal since asked for lower letters a-z not valid if given in ASCII
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.size() != t.size())
//             return false;

//         vector<int> freq(26, 0);

//         for (char c : s)
//             freq[c - 'a']++;

//         for (char c : t)
//             freq[c - 'a']--;

//         for (int x : freq)
//             if (x != 0)
//                 return false;

//         return true;
//     }
// };

int main() {

    string s="mansi",t="isnam";
    Solution obj;
    bool value = obj.isAnagram(s,t);
    string res = value==1 ? "true" : "false";
    cout << "\nAre the strings Anagrams? - " << res;
    cout << endl;

    return 0;
}

