// Problem: Binary Search, LeetCode 704
// Approach: Initialize two var start and end then find mid and compare mid
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end) {
            int mid = start + (end - start)/2;

            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }

        return -1;
    }
};