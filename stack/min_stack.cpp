// Problem: Min Stack
// Platform: LeetCode 155
// Approach: Make two stack one main and another minStack for storing minimum.
// Time Complexity: O(1)
// Space Complexity: O(n)

class MinStack {
private:
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {
    }  
    
    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
        
    }
    
    void pop() {
        if (st.top() == minSt.top()) {
            minSt.pop();
        } 
        st.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return minSt.top();
        
    }
};
