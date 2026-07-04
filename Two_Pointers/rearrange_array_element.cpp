// Problem: Rearrange Array Elements by Sign, LeetCode 2143.
// Pattern: Two Pointer 
// Approach: Initialize an answer vector ans of the same size as nums. Use two pointers: pos = 0 to track the next even index (for positive
//numbers) and neg = 1 to track the next odd index (for negative numbers). Traverse the nums array once. If the current element is positive,
// place it at ans[pos] and increment pos by 2. Otherwise, place it at ans[neg] and increment neg by 2.
// Time Complexity: O(n) 
// Space Complexity: O(n)


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int pos = 0;
        int neg = 1;

        for(int i = 0; i < nums.size(); i++) {
           
            if(nums[i] > 0) {
                ans[pos] = nums[i];
                pos += 2;
            } else {
                ans[neg] = nums[i];
                neg +=2;
            }
            
            
        }
           
        
        return ans;
        
    }
};