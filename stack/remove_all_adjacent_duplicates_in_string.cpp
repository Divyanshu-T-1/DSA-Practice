// Problem: Remove All Adjacent Duplicates In String, LeetCode 1047
// Approach: If st.top() is equal to the current element than pop else push
// Time Complexity: O(n);
// Space Complexity: O(n);

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for(int i = 0; i < s.size(); i++) {

            if(!st.empty() && st.top() == s[i]) {
                st.pop();
            }
            else {
                st.push(s[i]);

            }
            
        }
        
        string result = "";

        while(!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());

        return result;
        
    }
};
