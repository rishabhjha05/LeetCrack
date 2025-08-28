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
        ListNode* prev=head;
        ListNode* curr=head->next;
        ListNode* Next=curr->next;
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
    int pairSum(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* head2=rev(slow->next);
        slow->next=NULL;
        int mx=INT_MIN;
        ListNode* temp1=head,*temp2=head2;
        while(temp1 && temp2){
            mx=max(mx,temp1->val+temp2->val);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return mx;
    }
};