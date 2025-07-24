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
        ListNode *temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        return size;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int size=length(head);
        if(size==1)
            return head;
        for(int i=1;i<(size/2);i++)
                temp=temp->next;
        return temp->next;

    }
};