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
    if(head==NULL || head->next==NULL || k==0)  return head;
    int size=0;
    ListNode *temp=head;
    while(temp){
        size++;
        temp=temp->next;
    }
    ListNode *slow = head, *fast = head;
    k%=size;
    for (int i = 1; i <= k; i++)
        fast = fast->next;
    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = head;
    head = slow->next;
    slow->next = NULL;
    return head;
    }
};