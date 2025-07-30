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
        ListNode* temp=head;
        for(int i=1;i<=idx;i++)
            temp=temp->next;
        return temp;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int size=0;
        while(temp){
            temp=temp->next;
            size++;
        }
        ListNode* left=getNode(head,k-1);
        ListNode* right=getNode(head,size-k);
        int tmp=left->val;
        left->val=right->val;
        right->val=tmp;
        return head;
    }
};