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
public:ListNode *rev(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *prev = head, *curr = prev->next, *Next = curr->next;
    while (Next)
    {
        curr->next = prev;
        prev = curr;
        curr = Next;
        Next = Next->next;
    }
    curr->next = prev;
    head->next = NULL;
    return curr;
}
int pairSum(ListNode *head)
{
    ListNode *slow=head,*fast=head;
    while(fast && fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    ListNode *head2=slow->next,*t1=head,*t2;
    head2=rev(head2);
    t2=head2;
    int mx=INT_MIN;
    while(t1&&t2){
        mx=max(mx,t1->val+t2->val);
        t1=t1->next;
        t2=t2->next;
    }
    return mx;
}
};