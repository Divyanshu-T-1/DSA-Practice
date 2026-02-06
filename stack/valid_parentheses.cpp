// Problem: Valid Parentheses
// Platform: LeetCode 20
// Approach: Push the opening brackets and pop when closing brackets mathches
// Time Complexity: O(n) because we perform n push and pop opertion for each elecment in the stack
// Space Complexity: O(n) 

class Solution { 
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s) {

            // push opening brackets
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }
            
            // Closing brackets
            else {
                if (st.empty()) return false;

                if (ch == ')' && st.top() == '(') {
                    st.pop();
                }
                else if (ch == ']' && st.top() == '[') {
                    st.pop();
                }
                else if(ch == '}' && st.top() == '{') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();


        
        
    }
};