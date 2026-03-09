// Problem: Online Stock Span, LeetCode 901, Monotonic Decreasing Stack
// Approach: Use a Monotonic Decreasing stack storing (price, span). 
//           While checking if the previous price is smallar or equal than pop and span++.
// Time Complexity: O(n) due to n push and pop operation in the stack.
// Space Complexity: O(n) because in the worst case we keep call the next instade of poping

class StockSpanner {
public:
    stack<pair<int, int>> st;

    StockSpanner() {
        
    }
    
    int next(int price) {

        int span = 1;
        while(!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
        return span;
        
    }
};
