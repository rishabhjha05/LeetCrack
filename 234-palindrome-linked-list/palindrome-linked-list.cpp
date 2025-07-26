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
    ListNode* reverseList(ListNode* head){
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *head2=new ListNode(-1);
        ListNode *ctemp=head2;
        ListNode *temp=head;
        while(temp!=NULL){
            ListNode *t=new ListNode(temp->val);
            ctemp->next=t;
            temp=temp->next;
            ctemp=ctemp->next;
        }
        head2=head2->next;
        ListNode *revHead=reverseList(head);
        while(head2!=NULL){
            if(head2->val!=revHead->val)
                return false;
            head2=head2->next;
            revHead=revHead->next;
        }
        return true;
    }
};