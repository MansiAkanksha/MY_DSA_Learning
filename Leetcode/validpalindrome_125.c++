#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
// Two Pointer - optimal solution TC-O(n) SC - O(1)
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            while (left < right && !isalnum(s[left]))
                left++;

            while (left < right && !isalnum(s[right]))
                right--;

            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};

// My Approach - TC-O(n), SC-O(n)
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string temp="";
//         for(char c : s){
//             c=tolower(c);
//             if(isalnum(c))
//                 temp+=c;
//         }
//         string temp1=temp;
//         reverse(temp1.begin(),temp1.end());
        
//         return temp1==temp;
//     }
// };

int main() {

    string s="A man, a plan, a canal : panama";
    Solution obj;
    bool value = obj.isPalindrome(s);
    string ans= value==0 ? "Not a palindrome" : "Is a Palindrome";
    cout << "\nThe string " << s <<" a palindrome or not ? " << ans;
    cout << endl;

    return 0;
}

