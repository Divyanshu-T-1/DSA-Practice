// Problem: LeetCode: 410, Split Array Largest Sum 
// Pattern: Binary Search
// Approach: Apply Binary Search in the search space max(nums), sum(nums) and for every mid check valid k split using bool fuction
// Time Complexity: O(n * log(sum(nums)))
// Space Complexity: O(1)

class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int maxSum) {
        int subarray = 1;
        int currentSum = 0;

        for(int num : nums) {
            if(currentSum + num <= maxSum) {
                currentSum += num;
            } else {
                subarray++;
                currentSum = num;
            }
        }
    return subarray <= k;

    }
    int splitArray(vector<int>& nums, int k) {

        int start = *max_element(nums.begin(), nums.end());
        int end = accumulate(nums.begin(), nums.end(), 0);
        int ans = end;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(canSplit(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

    return ans;
}
};