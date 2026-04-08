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
    ListNode* reverseList(ListNode* head) {
        if(!head) return NULL;
        ListNode* prev = head;
        ListNode* temp = head->next;
        ListNode* left = temp;
        prev->next = NULL;

        while(temp) {
            left = temp->next;
            temp->next = prev;

            prev = temp;
            temp = left;
        }
        return prev;
    }
};
