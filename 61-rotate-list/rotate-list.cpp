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
    ListNode* rotateRight(ListNode* head, int k) {
        
    int size = 0;
    ListNode *temp = head, *tail;
    while (temp)
    {
        if (temp->next == NULL)
            tail = temp;
        size++;
        temp = temp->next;
    }
    if (size == 0)
        return head;
    else if (k == 0)
        return head;
    k = size - (k % size);

    temp = head;
    for (int i = 1; i < k; i++)
        temp = temp->next;
    tail->next = head;
    head = temp->next;
    temp->next = NULL;
    return head;
    }
};