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
        ListNode* pt=head;
        while(pt && pt->next){
            ListNode* left=pt;
            ListNode* right=pt->next;
            int temp=left->val;
            left->val=right->val;
            right->val=temp;
            pt=pt->next->next;
        }
        return head;
    }
};