// Problem: Reverse Linked List 2nd, LeetCode 92
// Approach: Reach node just before left and reverse nodes between left to righ and reconnect.
// Time Complexity: O(n)
// Space Complexity: O(1)


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     ListNode* dummy = new ListNode(0);
     dummy->next = head;
     ListNode* prev = dummy;

     for(int i = 1; i < left; i++) {
        prev = prev->next;
     }

     ListNode* curr = prev->next;
     for(int i = 0; i < right - left; i++) {
        ListNode* temp = curr->next; // pick up the node
        curr->next = temp->next; // remove the node
        temp->next = prev->next; // point to the front
        prev->next = temp; // insert after prev
     }

    return dummy->next;

    }
};