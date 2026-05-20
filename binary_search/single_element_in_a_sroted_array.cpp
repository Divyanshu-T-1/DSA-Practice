// Problem: LeetCode 540. Singel Element in a Sorted Array
// Approach: Use binary search and always make mid an even index to compare valid pairs (nums[mid] and nums[mid+1]).
// If the pair is correct move right, otherwise move left until reaching the single element.
// Time Complexity: O(long n)
// Space Complexity: O(1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while(start < end) {
            int mid = start + (end - start) / 2;

            // make mid even
            if(mid % 2 != 0) {
                mid--;
            }

            if(nums[mid] == nums[mid + 1]) {
                start = mid + 2;
            }

            else {
                end = mid;
            }
        }

    return nums[start];
}
};