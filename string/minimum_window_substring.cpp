// Problem: LeetCode: 76, Minimum Window Substring
// Pattern: Sliding Window + HashMap
// Time Complexity: O (n + m): n = right traversal , m = buildig the need map
// Space Complexity: O (k) where k = distinct char

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        unordered_map<char, int> window;

        for(char c : t) {
            need[c]++;
        }

        int left = 0;
        int right = 0;
        int minLen = INT_MAX;
        int start = 0;
        int formed = 0;
        int required = need.size();

        while(right < s.length()) {
            window[s[right]]++;

            if (need.count(s[right]) && window[s[right]] == need[s[right]]) {
                formed++;
            }

            while(formed == required) {

                window[s[left]]--;
                
                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                if (need.count(s[left]) && window[s[left]] < need[s[left]]) {
                    formed--;
                }

                left++;
            }

            right++;
        }
        
        if(minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);
    }
};