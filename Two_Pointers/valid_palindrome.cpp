// Problem: Valid Palindrome
// Platform: LeetCode 125
// Pattern: Two Pointer
// Approach: Use two pointer from both ends. Skip non-alphanumaric character
// using isalnum(). Convert uppercase to valid char using tolower() and compar.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            // comparision
            if(!isalnum(s[left])) {
                left++;
            }

            else if(!isalnum(s[right])) {
                right--;

            }

            else {
                // directly converting to uppercase to lowercase and comparing
                if(tolower(s[left]) != tolower(s[right])) {
                    return false;
                }
                left++;
                right--;
            }
            
        }
        return true;
        
    }
};