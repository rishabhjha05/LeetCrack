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
ListNode *deleteMiddle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prevS=NULL;
    while (fast && fast->next)
    {
        prevS = slow;
        fast = fast->next->next;
        slow = slow->next;
    }
    if(prevS==NULL)  return head->next;
        prevS->next=slow->next;
    return head;
}
};