// Problem: LeetCode 150. Evaluate Reverse Polish Notation
// Approach: Creating a stck to evaluate the postfix expression by pushing
// numbers and applying operators when encountered. For each operator, pop 
// two elements (b first, then a), compute a operator b, and push the result
// back, the final answer ramains st the top of the stack.
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;

        for(int i = 0; i < n; i++) {
            // Pushing Integers in to stack
            if(tokens[i] != "+" &&
             tokens[i] != "-" &&
             tokens[i] != "*" &&
             tokens[i] != "/") {
                st.push(stoi(tokens[i]));
            }
            else {
                // Handling operators
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                // Performing calculation and pushing result

                if(tokens[i] == "+") st.push(a + b);
                else if(tokens[i] == "-") st.push(a - b);
                else if(tokens[i] == "*") st.push(a * b);
                else st.push(a / b);
            }
        }

        return st.top();
        
    }
};