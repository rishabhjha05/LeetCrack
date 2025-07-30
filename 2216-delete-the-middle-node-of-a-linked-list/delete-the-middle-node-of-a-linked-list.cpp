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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *prevSlow=NULL,*slow=head,*fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            prevSlow=slow;
            slow=slow->next;
        }
        if(prevSlow==NULL)  return head->next;
        prevSlow->next=slow->next;
        return head;
    }
};