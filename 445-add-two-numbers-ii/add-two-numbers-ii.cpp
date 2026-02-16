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
       stack<int> st1,st2;
        while(l1)
            st1.push(l1->val),l1=l1->next;
        while(l2)
            st2.push(l2->val),l2=l2->next;
        ListNode* head=new ListNode(-1);
        ListNode* temp=head;
        int s=0,carry=0;
        while(st1.size() && st2.size()){
            s=st1.top()+st2.top()+carry;
            carry=s/10;
            ListNode* node=new ListNode(s%10);
            temp->next=node;
            temp=temp->next;
            st1.pop(),st2.pop();
        }
        while(st1.size()){
            s=st1.top()+carry;
            carry=s/10;
            ListNode* node=new ListNode(s%10);
            temp->next=node;
            temp=temp->next,st1.pop();
        }
        while(st2.size()){
            s=st2.top()+carry;
            carry=s/10;
            ListNode* node=new ListNode(s%10);
            temp->next=node;
            temp=temp->next,st2.pop();
        }
        if(carry!=0){
            ListNode* node=new ListNode(carry);
            temp->next=node;
        }
        return rev(head->next);
    }
};