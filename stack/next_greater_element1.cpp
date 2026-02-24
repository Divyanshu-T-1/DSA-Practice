// Problem: Next Greater Element 1
// Platform: LeetCode 496
// Time Complexity: O(n + m)
// Space Complexity: O(n)
// Approach: We use a Monotonic decreasing Stack and Hash Map method.
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mp;

        // find grater element from nums2 and stored in map

        for(int num : nums2) {
            while(!st.empty() && num > st.top()) {
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        // for remaining element store -1

        while(!st.empty()) {
            mp[st.top()] = -1;
            st.pop();
        }

        // build ans for nums1

        vector<int> ans;
        for(int num : nums1) {
            ans.push_back(mp[num]);
        }

    return ans;


    }
};