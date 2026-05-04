// Problem : Find Minimum in Rotated Sorted Array, LeetCode: 153
// Approach: Use binary search to loacte the rotation point that is minimum element. Compare nums[mid] with nums[end]: 
// if nums[mid] > nums    [end], minimum lies in left so start = mid + 1 else end = mid because mid can also be minimum
// Time Complexity: O(logn)
// Space Complexity: O(1)

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while(start < end) {
            int mid = start + (end - start) / 2;

            if(nums[mid] > nums[end]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
    return nums[start]; 

    }
};