// Problem: Reverse Linked List, LeetCode 206
// Approach: Two Pointer
// Time Complexity: O(n) due to n element
<<<<<<< HEAD
// Space Complexity: O(1) because we use three pointers only which take constant space
=======
// Space Complexity: O(1) because we use three pointers that take constant space 
>>>>>>> 5e03241 (Add Linked Lsit Cycle, LeetCode 141, solved using Floyed's Cycle Detection in O(n) time and O(1) constant space complexity.)

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
