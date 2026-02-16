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
        if(!head || !(head->next))
            return head;
        ListNode* prev=head,*curr=head->next,*Next=curr->next;
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=rev(l1);
        l2=rev(l2);
        ListNode* head=new ListNode(-1);
        ListNode* temp=head;
        int s=0,carry=0;
        while(l1 && l2){
            s=l1->val+l2->val+carry;
            carry=s/10;
            ListNode* node=new ListNode(s%10);
            temp->next=node;
            temp=temp->next,l1=l1->next,l2=l2->next;
        }
        while(l1){
            s=l1->val+carry;
            carry=s/10;
            ListNode* node=new ListNode(s%10);
            temp->next=node;
            temp=temp->next,l1=l1->next;
        }
        while(l2){
            s=l2->val+carry;
            carry=s/10;
            ListNode* node=new ListNode(s%10);
            temp->next=node;
            temp=temp->next,l2=l2->next;
        }
        if(carry!=0){
            ListNode* node=new ListNode(carry);
            temp->next=node;
        }
        return rev(head->next);
    }
};