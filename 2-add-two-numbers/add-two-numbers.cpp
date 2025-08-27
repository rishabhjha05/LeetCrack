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
        int carry=0;
        ListNode* dummy=new ListNode(0);
        ListNode* temp1=l1,*temp2=l2,*temp3=dummy;
        while(temp1 && temp2){
            int sum=temp1->val+temp2->val+carry;
            if(sum<10){
                ListNode* node=new ListNode(sum);
                temp3->next=node;
                temp3=node;
                carry=0;
            }
            else
            {
                ListNode* node=new ListNode(sum%10);
                temp3->next=node;
                temp3=node;
                carry=1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1){
            int sum=temp1->val+carry;
            if(sum<10){
                ListNode* node=new ListNode(sum);
                temp3->next=node;
                temp3=node;
                carry=0;
            }
            else
            {
                ListNode* node=new ListNode(sum%10);
                temp3->next=node;
                temp3=node;
                carry=1;
            }
            temp1=temp1->next;
        }
        while(temp2){
            int sum=temp2->val+carry;
            if(sum<10){
                ListNode* node=new ListNode(sum);
                temp3->next=node;
                temp3=node;
                carry=0;
            }
            else
            {
                ListNode* node=new ListNode(sum%10);
                temp3->next=node;
                temp3=node;
                carry=1;
            }
            temp2=temp2->next;
        }
        if(carry){
            ListNode* node=new ListNode(carry);
            temp3->next=node;
            temp3=node;
        }
        return dummy->next;
    }
};