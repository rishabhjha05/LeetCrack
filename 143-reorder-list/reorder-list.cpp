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
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *prev=head;
        ListNode *curr=head->next;
        ListNode *Next=head->next->next;
        while(Next!=NULL){
            curr->next=prev;
            prev=curr;
            curr=Next;
            Next=Next->next;
        }
        curr->next=prev;
        head->next=NULL;
        head=curr;
        return head;
    }
    void reorderList(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *p2;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        p2=slow->next;
        slow->next=NULL;
        ListNode* ta=head;
        ListNode* tb=reverseList(p2);
        ListNode* head2=new ListNode(-1);
        ListNode* temp=head2;
        while(ta!=NULL)
        {
            temp->next=ta;
            ta=ta->next;
            temp=temp->next;
            temp->next=tb;
            temp=temp->next;
            if(tb!=NULL)
                tb=tb->next;
        }
        head=head2->next;
    }
};