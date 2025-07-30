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
ListNode *reverseList(ListNode *head)
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
    head = curr;
    return head;
}
ListNode *reorderList(ListNode *head)
{
    ListNode *slow = head, *fast = head;
    while (fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode *head2 = slow->next;
    slow->next = NULL;
    head2 = reverseList(head2);
    ListNode *temp1 = head, *temp2 = head2;
    ListNode *head3 = new ListNode(-1), *temp = head3;
    while (temp1)
    {
        temp->next = temp1;
        temp1 = temp1->next;
        temp = temp->next;
        temp->next = temp2;
        if (temp2 == NULL)
            break;
        temp2 = temp2->next;
        temp = temp->next;
    }
    return head3->next;
}
};