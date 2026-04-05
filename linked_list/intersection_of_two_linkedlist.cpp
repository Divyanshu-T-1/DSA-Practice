// Problem: Intersection of Two Linked Lists, LeetCode 160.
// Approach: Two pointer traversal with path equalization
// Time Complexity: O(m + n)
// Space Complexity: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode* a = headA;
       ListNode* b = headB;

       while(a != b) {
        a = (a == NULL) ? headB : a->next;
        b = (b == NULL) ? headA : b->next;
       }
       return a;
    }
};