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
    // ListNode* reverseList(ListNode* head){
    //     if(head==NULL || head->next==NULL)
    //         return head;
    //     ListNode *newHead=reverseList(head->next);
    //     head->next->next=head;
    //     head->next=NULL;
    //     return newHead;
    // }
    //for better time complexity in this code use another reverse list function
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *prev=head;
        ListNode *curr=head->next;
        ListNode *Next=head->next->next;
        while(Next!=NULL){
            curr->next=prev;
            prev=curr;
            curr=Next;
            Next=Next->next;
        }
        curr->next=prev;
        head->next=NULL;
        head=curr;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *head2=slow->next;
        slow->next=NULL;
        ListNode *revHead=reverseList(head2);
        while(revHead!=NULL){
            if(head->val!=revHead->val)
                return false;
            head=head->next;
            revHead=revHead->next;
        }
        return true;
    }
};