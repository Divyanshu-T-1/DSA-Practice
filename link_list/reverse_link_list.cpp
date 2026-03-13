// Problem: Reverse Linked List, LeetCode 206
// Approach: Two Pointer
// Time Complexity: O(n) due to n element
// Space Complexity; O(1)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;


    while(curr != NULL) {
        ListNode* next = curr->next; // store next
        curr->next = prev;       // reverse link
        prev = curr;             // move prev
        curr = next;             // move curr
    }

    return prev;
}
};