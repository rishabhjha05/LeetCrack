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
    ListNode* deleteDuplicates(ListNode* head) {
      
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *head2 = new ListNode(-1);
    ListNode *temp = head, *temp2 = head2;
    ListNode *prev = head, *curr = prev->next, *Next = curr->next;
    if (head->val != head->next->val)
    {
        cout<<"Yes1";
        temp2->next = head;
        temp2=temp2->next;
    }
    while (Next)
    {
        if (curr->val != prev->val && curr->val != Next->val)
        {
            cout<<"Yes";
            temp2->next = curr;
            temp2 = temp2->next;
        }
        prev = curr;
        curr = Next;
        Next = Next->next;
    }
    if (prev->val != curr->val)
    {
        temp2->next = curr;
        temp2 = temp2->next;
    }
    temp2->next=NULL;
    return head2->next;
    }
};