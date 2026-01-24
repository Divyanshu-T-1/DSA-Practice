// Problem: Maximum Number of Vowels in a Substring of Given Length
// Platform: LeetCode 1456
// Approach: This is a fixed size sliding window ,so we maintain
// a count of vowels in a window size k. As the window slides, we
// update the count by adding the entering char and removing the 
// existing char, and track the maximum count.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int count = 0;
        int maxVowels = 0;

        for (int right = 0; right < s.size(); right++) {

            if (s[right] == 'a' || s[right] == 'e' || s[right] == 'i' ||
                s[right] == 'o' || s[right] == 'u') {
                count++;
            }

            if (right - left + 1 > k) {
                if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' ||
                    s[left] == 'o' || s[left] == 'u') {
                    count--;
                }
                left++;
            }

            if (right - left + 1 == k) {
                maxVowels = max(maxVowels, count);
            }
        }

        return maxVowels;
    }
};
