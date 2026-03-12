// Problem: Implement Stack using Queues, LeetCode 225
// Approach: // Use two queues q1 acts as the main stack and q2 is used as a temporary queue.
// When pushing a new element, push it into q2 and move all elements
// from q1 to q2 so that the newest element stays at the front.
// Then swap q1 and q2.
// Time Complexity: O(n)
// Space Complexity: O(n)

class MyStack {
public:
    queue<int> q1; // main stack
    queue<int> q2; 
    
    MyStack() {
    }
    
    void push(int x) {
        q2.push(x);
        
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);

    }
    
    int pop() {
        
        int val = q1.front();
        q1.pop();
        return val;
       
    }
    
    int top() {
        return q1.front();
      
    }
    
    bool empty() {

        return q1.empty();
       
    }
};

