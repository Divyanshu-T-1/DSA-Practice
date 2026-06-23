// Problem: Rotate Array, LeetCode: 189
// Approach: Crate a temp array, find newIndex by (i + k) % n and 
// push all element in the temp array than reassign temp array to the the original
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> num(n);
        k = k % n;
        for(int i = 0; i < n; i++) {
            int newIndex = (i + k) % n;
            num[newIndex] = nums[i];


        }

        nums = num;
   
    }
};