// Problem: Next Permutation
// Platform: LeetCode 31.
// Approach: Traverse the array from the right, find the breakpoint than 
// then find the smallest element greater than breakpoint swap it with 
// breakpoint and reverse the suffix
// Time Complexity: O(n) 
// Space Complexity: O(1)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        // Find break point
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // if no break point
        if(index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the smallest largest element
        for(int i = n - 1; i > index; i--) {
            if(nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }
        // Reverse the suffix
        reverse(nums.begin() + index + 1, nums.end());
    }
};