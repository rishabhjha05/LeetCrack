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
    ListNode* getNode(ListNode* head,int idx){
        ListNode *temp=head;
        for(int i=1;i<=idx;i++) 
            temp=temp->next;
        return temp;
    }
    ListNode* reverseList(ListNode* head) {
        int size=0,i,j;
        ListNode* temp=head;
        while(temp)
        {
            size++;
            temp=temp->next;
        }
        i=0,j=size-1;
        while(i<j){
            ListNode *left=getNode(head,i);
            ListNode *right=getNode(head,j);
            int t=left->val;
            left->val=right->val;
            right->val=t;
            i++,j--;
        }
        return head;
    }
};