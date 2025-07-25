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
    ListNode* partition(ListNode* head, int x) {
        ListNode *tl=new ListNode(-1);
        ListNode *th=new ListNode(-1);
        ListNode *head1=tl,*head2=th;
        ListNode *temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                tl->next=temp;
                temp=temp->next;
                tl=tl->next;
            }
            else
            {
                th->next=temp;
                temp=temp->next;
                th=th->next;
            }
        }
        tl->next=head2->next;
        th->next=NULL;
        return head1->next;
    }
};