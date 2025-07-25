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
    int length(ListNode* head){
        ListNode*temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        return size;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        int size=length(head);
        if(size!=0)
            k=k%size;
        else
            return head;
        for(int i=1;i<=k;i++)
            fast=fast->next;

        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
        return head;
    }
};