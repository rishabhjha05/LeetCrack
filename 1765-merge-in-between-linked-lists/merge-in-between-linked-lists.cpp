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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       
    int n = 0;
    ListNode *temp = list1, *pt1, *pt2;
    while (temp)
    {
        if (n == a - 1)
        {
            pt1 = temp;
        }
        if (n == b + 1)
        {
            pt2 = temp;
            break;
        }
        temp = temp->next;
        n++;
    }
    temp = list2;
    pt1->next = list2;
    while (temp->next)
        temp = temp->next;
    temp->next = pt2;
    return list1;
    }
};