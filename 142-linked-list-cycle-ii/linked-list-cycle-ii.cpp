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
    ListNode *detectCycle(ListNode *head) {
        
    ListNode *slow = head;
    ListNode *fast = head;
    bool found = false;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        ListNode *temp = head;
        while (temp != NULL)
        {
            if (temp == slow)
                return temp;
            temp = temp->next;
            slow = slow->next;
        }
    }
    return NULL;
    }
};