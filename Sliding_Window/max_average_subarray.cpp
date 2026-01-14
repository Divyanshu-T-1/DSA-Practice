// Problem: Maximum Average Subarray
// Platform: LeetCode 643
// Time Complexity: O(n)
// Space Complexity: O(1)
// Pattern : Fixed Size Sliding Window

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long windowSum = 0;
        for(int i = 0; i < k; i++) {
            windowSum += nums[i];

        }
        long long maxSum = windowSum;
        for(int i = k; i < n; i++) {
            windowSum += nums[i];
            windowSum -= nums[i - k];
            maxSum = max(maxSum, windowSum);
        }
       return (double) maxSum / k;
        
    }
};