// Problem: Minimum Absolute Distance Between Mirror Pairs, LeetCode: 3761
// Approach: Use a hashmap to store reverse of numbers with their indices.
//           For each element, check if it already exists in map (mirror found).
// Time Complexity: O(n * d), where d = number of digits (~log10(value))
// Space Complexity: O(n)

class Solution {
public:
    int getReverse(int n) {
        int rev = 0;
        while(n != 0) {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        return rev;
    }
  
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> map; // reverse -> index

        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            if(map.count(nums[i])) {
                ans = min(ans, i - map[nums[i]]);
            } else {
                map[getReverse(nums[i])] = i;
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};