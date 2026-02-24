// Problem: Next Greater element 2nd
// Platform: LeetCode 503
// Approach: Using Monotonic decreasing stack and maintain circular nature of an array
// by modulo index = i % n 
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n, -1);

        for(int i = 0; i < 2*n; i++) {
            // maintaing the circular nature 
            int index = i % n;

            while(!st.empty() && nums[index] > nums[st.top()]) {
                ans[st.top()] = nums[index];
                st.pop();
            }

            if(i < n) {
                st.push(index);
            }
        }

        return ans;
     
        
    }
};