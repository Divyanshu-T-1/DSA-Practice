// Problem: Swap Nodes in Pairs, LeetCode 24
// Approach: Traverse linked list swap nodes in pair by pointer adjustment
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
    ListNode* swapPairs(ListNode* head) {
       ListNode dummy(0);
       dummy.next = head;

       ListNode* prev = &dummy;

       while(prev->next && prev->next->next) {
        ListNode* first = prev->next;
        ListNode* second = prev->next->next;

        // swap
        first->next = second->next;
        second->next = first;
        // connect dummy to new head
        prev->next = second;

        prev = first;
       }

       return dummy.next;
    }
};