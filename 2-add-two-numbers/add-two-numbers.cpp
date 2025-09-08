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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(-1);
        ListNode* temp=head,*temp1=l1,*temp2=l2;
        int carry=0;
        while(temp1 && temp2)
        {
            int sum=temp1->val+temp2->val+carry;
            carry=sum/10;
            ListNode *node =new ListNode(sum%10);
            temp->next=node;
            temp1=temp1->next;
            temp2=temp2->next;
            temp=temp->next;
        }
        while(temp1){
            int sum=temp1->val+carry;
            carry=sum/10;
            ListNode *node =new ListNode(sum%10);
            temp->next=node;
            temp1=temp1->next;
            temp=temp->next;
        }
        while(temp2){
            int sum=temp2->val+carry;
            carry=sum/10;
            ListNode *node =new ListNode(sum%10);
            temp->next=node;
            temp2=temp2->next;
            temp=temp->next;
        }
        if(carry!=0)
        {
            ListNode *node =new ListNode(carry);
            temp->next=node;
            temp=temp->next;
        }
        temp->next=NULL;
        return head->next;
    }
};