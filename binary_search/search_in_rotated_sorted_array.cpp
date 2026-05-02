// Problem: Search in Rotated Sorted Array, LeetCode: 33
// Approach: Apply Binary Search and find half sorted array than decide where target lies move accordingly
// Time Complexity: O(logn)
// Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                return mid;
            }
            // left half sorted
            if(nums[start] < nums[mid]) {
                if(nums[start] <= target && target < nums[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }

            }
            // right half is sorted
            else {
                if(nums[mid] < target && target <= nums[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        
    return -1;    

    }
};