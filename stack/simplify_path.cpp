// Problem: Simplify Path LeetCode 71
// Approach: Split the path by "/"
// Time Complexity: O(n) because loop runs n times
// Space Complexity: O(n) stack takes n memory

class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        stack<string> st;
        string curr = "";

        for(int i = 0; i <= n; i++) {
            if(i == n || path[i] == '/') {
                if(curr == "" || curr == ".") {
                    // as it is
                }
                else if(curr == "..") {
                    if(!st.empty()) {
                        st.pop();
                    }
                }
                else {
                    st.push(curr);
                }
                curr = "";
            }
            else {
                curr += path[i];
            }
        }

        string result = "";
        while(!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }

        if(result == "") return "/";

        return result;

        
    }
};