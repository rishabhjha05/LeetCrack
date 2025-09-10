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
    ListNode* rev(ListNode* head){
        if(head==NULL || head->next==NULL)
            return head;
        ListNode*prev=head,*curr=prev->next,*Next=curr->next;
        while(Next){
            curr->next=prev;
            prev=curr;
            curr=Next;
            Next=Next->next;
        }
        curr->next=prev;
        head->next=NULL;
        return curr;
    }
    int getDecimalValue(ListNode* head) {
        int bin=0,i=0;
        head=rev(head);
        ListNode* temp=head;
        while(temp){
            bin+=temp->val*pow(2,i);
            temp=temp->next;
            i++;
        }
        return bin;
    }
};