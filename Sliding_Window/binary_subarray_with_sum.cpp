// Problem: Binarry Subarrays With Sum
// Platform: LeetCode 930
// Pattern: Exact Sum in Binary Array
// Idea: Exact sum is difficult in Binary Array,count subarrays 
// with sum <= goal using sliding window, and subtract <= goal-1
// to isolate sum exactly equal to goal
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) {
            return 0;
        }

        int sum = 0;
        int count = 0;
        int left = 0;

        for(int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            
            while(sum > goal) {
                sum -= nums[left];
                left++;
            }

            count += (right - left + 1);
        }
        return count;

    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int exactGoalSubarrays = atMost(nums, goal) - atMost(nums, goal -1);
        return exactGoalSubarrays;
        
        
    }
};