// Problem: Valid Palindrome 2nd
// Platform: LeetCode 680
// Pattern: Two Pointer
// Approach: Initialize two pointer left and right and 
// use a helper function and check for only one element.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPal(string &s, int left, int right) {
        while(left < right) {
            if(s[left] != s[right]) 
                return false;
                left++;
                right--;
            }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() -1;

        while(left < right) {
            if(s[left] == s[right]) {
               left++;
               right--;
            }
            else {
                // skip only one 
               return isPal(s, left + 1, right) || isPal(s, left, right - 1);
            }
        }

        return true;
        
    }
};