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
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        return size;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n){
        int size=length(head),m=size-n;
        if(size<=1) return NULL;
        ListNode* temp=head;
        for(int i=1;i<m;i++)
            temp=temp->next;
        if(m==0) head=temp->next;
        temp->next=temp->next->next;
        return head;
    }
};