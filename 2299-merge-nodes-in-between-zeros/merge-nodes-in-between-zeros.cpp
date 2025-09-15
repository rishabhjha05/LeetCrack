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
    ListNode* mergeNodes(ListNode* head) {
        
    ListNode *pt = head;
    ListNode *head2 = new ListNode(-1);
    ListNode *temp = head2;
    int sum;
    while (pt)
    {
        while (pt->val)
        {
            sum += pt->val;
            pt = pt->next;
        }
        if (sum)
        {
            ListNode *node = new ListNode(sum);
            temp->next = node;
            temp = temp->next;
        }
        pt = pt->next;
        sum = 0;
    }
    return head2->next;
    }
};