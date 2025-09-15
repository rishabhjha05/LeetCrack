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
       ListNode *rev(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *prev = head, *curr = head->next, *Next = curr->next;
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
ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *prev = head, *Next = head, *pp = NULL;
    bool found = false;
    while (Next)
    {
        for (int i = 1; i < k; i++)
            if (Next)
                Next = Next->next;
        if (Next)
        {
            ListNode *Next2 = Next->next;
            if (!found)
                head = Next, found = true;
            Next->next = NULL;
            Next = prev;
            prev = rev(prev);
            if (pp)
                pp->next = prev;
            pp = Next;
            prev = Next2;
            Next->next = Next2;
            Next = Next2;
        }
    }
    return head;
}
};