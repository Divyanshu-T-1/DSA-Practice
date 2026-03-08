// Pattern: Monotonic Stack, LeetCode 402, Remove K Digits
// Approach: if previous element > current than remove previous element
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for(int i = 0; i < num.size(); i++) {
            // if previous element is greater than current element than remove current element
            while(!st.empty() && k > 0 && st.top() > num[i] ) { 
               st.pop();
               k--;
                
            }
            st.push(num[i]);
        }

        // to handle the continuous increasiing string
         while( k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        string result = "";

        // calculating result
        while(!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());

        // handling leading zero after removal k digit
        int i = 0;
        while(i < result.size() && result[i] == '0') {
            i++;
        }
        result = result.substr(i);

        if( result == "") {
            return "0";
        }
        else {
            return result;
        }
    }
};


