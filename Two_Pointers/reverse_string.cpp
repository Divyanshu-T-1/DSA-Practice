// Problem: Reverse String
// Platform: LeetCode 344
// Pattern: Two pointer
// Approach: Use two pointer to reverse the string in-place. Initialize
// two pointer left to starting index and right to ending index,apply a 
// swap functin only to reverse character 
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
        
        
    }
};