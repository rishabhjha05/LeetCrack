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
    ListNode* swapPairs(ListNode* head) {
        
    ListNode *prev = head, *Next = head, *pp = NULL;
    bool found = false;
    while (Next)
    {
        if (Next)
            Next = Next->next;
        if (Next)
        {
            ListNode *Next2 = Next->next;
            if (!found)
                head = Next, found = true;
            ListNode* temp=Next;
            Next = prev;
            prev = temp;
            prev->next=Next;
            Next->next=Next2;
            if (pp)
                pp->next = prev;
            pp = Next;
            prev = Next2;
            Next = Next2;
        }
    }
    return head;
    }
};