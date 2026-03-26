// Problem: Remove Nth Node From End of List, LeetCode 19.
// Pattern: Two Pointer
// Approach: Move high pointer n steps ahead, then move both pointer
// when high reach end than low is just before target node
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* low = head;
      ListNode* high = head;

      for(int i = 0; i < n; i++) {
        high = high->next;
      }

      if(high == NULL) {
        return head->next;
      }

      // Move both pointer
      while(high->next != NULL) {
        low = low->next;
        high = high->next;
      }

      // Delete target node
      low->next = low->next->next;

      return head;




    }
};