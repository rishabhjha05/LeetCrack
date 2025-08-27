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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* dummy=new ListNode(-1),*temp=head,*temp2=dummy;
        while(temp && temp->next){
            ListNode* node=new ListNode(temp->val);
            temp2->next=node;
            temp2=temp2->next;
            if(temp->next)
                temp=temp->next->next;
        }
        if(temp)
        {
            ListNode* node=new ListNode(temp->val);
            temp2->next=node;
            temp2=temp2->next;
        }
        temp=head->next;
        while(temp && temp->next){
            ListNode* node=new ListNode(temp->val);
            temp2->next=node;
            temp2=temp2->next;
            if(temp->next)
                temp=temp->next->next;
        }
        if(temp)
        {
            ListNode* node=new ListNode(temp->val);
            temp2->next=node;
            temp2=temp2->next;
        }
        return dummy->next;
    }
};