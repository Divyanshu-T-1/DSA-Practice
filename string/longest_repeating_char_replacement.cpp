// Problem: LeetCode 424, Longest Repeating Character Replacement

// Pattern: Hashmap + Sliding Window

// Algo: 1. Create a hashmap to count the Freq
// 2. countFreq, and calculate maxFreq
// 3. maintain SldingWindow
// 4. calculate maxLenth

// Time Complexity: O(n)

// Space Complexity: O(k) ~ O(1) : k are distinct elements = 26


class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int left = 0;
        int right = 0;
        int maxFreq = 0;
        int maxLen = 0;

        while(right < s.length()) {
            freq[s[right]]++;

            maxFreq = max(maxFreq, freq[s[right]]);

            if( right - left + 1 - maxFreq > k) {
                freq[s[left]]--;
                left++;
            }

            maxLen = max(right - left + 1 , maxLen);
            right++;
        }

        return maxLen;
        
    }
};
