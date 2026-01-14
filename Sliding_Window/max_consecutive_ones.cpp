// Problem: Max Consecutive Ones 3rd
// Pattern : Variable Size Window
// Platform: LeetCode 1004
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int zeroCount = 0;
        int maxlength = 0;
        
        for(int right = 0; right < nums.size(); right++) {
            if(nums[right] == 0) {
                zeroCount++;
            }

            while(zeroCount > k) {
                if(nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            maxlength = max(maxlength, right - left + 1);
        }
        return maxlength;
    }
};