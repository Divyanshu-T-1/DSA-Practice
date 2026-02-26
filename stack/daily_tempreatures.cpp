// Problem: Daily Tempreatures LeetCode 739
// Approach: Monotonic decreasing stack
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
       stack<int> st;
       vector<int> ans(n, 0);

       for ( int i = 0; i < n; i++) {

        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {

            int preIndex = st.top();
            st.pop();

            ans[preIndex] = i - preIndex;

        }

        st.push(i);
       }

       return ans;

        
    }
};