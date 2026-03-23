// Problem: Linked List Cycle, LeetCode 141
// Approach: Floyd's Cycle detection
// Time Complexity: O(n);
// Space Complexity: O(1);

class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;

       while(fast != NULL && fast->next != NULL) {
        slow = slow->next; // move one step
        fast = fast->next->next; // move 2 steps

        if(slow == fast) return true;

       }

       return false;
        
    }
};