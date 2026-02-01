// Problem: Squares of a Sorted Array
// Platform: LeetCode 977.
// Pattern: Two Pinter
// Approach: Initialize a vector of input size, take two pointer
// left and right apply while loop for traversing and take a 
// pointer for gradullay updating the ans compare absolute value
// of the input array then put at the corresponding position.
// Time Complexity: O(n)
// Spcae Complexity: O(1)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n - 1;
        int pos = n - 1;

        while(left <= right) {
           if(abs(nums[left]) > abs(nums[right])) {
            ans[pos] = nums[left] * nums[left];
            left++;
           }

           else {
            ans[pos] = nums[right] * nums[right];
            right--;
           }
           pos--;
        }
        return ans;
    }
};
