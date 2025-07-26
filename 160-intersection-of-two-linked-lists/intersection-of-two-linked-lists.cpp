/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode* head){
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        return size;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
    int sizeA = length(headA), sizeB = length(headB);
    if (sizeA > sizeB)
    {
        ListNode *tempA = headA, *tempB = headB;
        int n = sizeA - sizeB;
        for (int i = 1; i <= n; i++)
            tempA = tempA->next;
        while (tempA != tempB)
        {
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
    }
    else
    {

        ListNode *tempA = headA, *tempB = headB;
        int n = sizeB - sizeA;
        for (int i = 1; i <= n; i++)
            tempB = tempB->next;
        while (tempA != tempB)
        {
            
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
    }
    return NULL;
}
};