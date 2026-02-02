// Problem: Sort Colors
// Platform: LeetCode 75
// Pattern: Two Pointer (Partition)
// Approach: There are only three numbers 0, 1 and 2, so create 3 pointer left
// at 0, right at n - 1 and mid at 0, seperate 0 at left and 2 at right and left
// are in mid.
// Time Complexity: O(n)
// Spce Complexity: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;

        while(mid <= right) {
            if (nums[mid] == 0) {
                swap(nums[left], nums[mid]);
                left++;
                mid++;
            }

            else if (nums[mid] == 1) {
                mid++;
                
            }

            else { // nums[mid] == 2;
                swap(nums[mid], nums[right]);
                right--;

            }


        }
        
    }
};