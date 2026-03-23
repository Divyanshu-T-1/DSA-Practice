// Problem: Linked List Cycle, LeetCode 141
// Approach: In the first phase, we use Floyd’s Cycle Detection to check if a cycle exists. In the second phase,
// we find the starting node of the cycle because meeting point can be different but starting can't.
// Time Complexity: O(n);
// Space Complexity: O(1);

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
    ListNode *detectCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;

       while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            slow = head;

            while(slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }

            return slow;
        }

    }

       return NULL;
    }
};
