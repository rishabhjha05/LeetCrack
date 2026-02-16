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
        vector<int> n1,n2,sum;
        ListNode* t1=l1,*t2=l2;
        while(t1)
            n1.push_back(t1->val),t1=t1->next;
        while(t2)
            n2.push_back(t2->val),t2=t2->next;
        int n=n1.size(),m=n2.size(),i=n-1,j=m-1,carry=0;
        while(i>=0 && j>=0){
            int s=n1[i--]+n2[j--]+carry;
            sum.push_back(s%10);
            carry=s/10;
        }
        while(i>=0){
            int s=n1[i--]+carry;
            sum.push_back(s%10);
            carry=s/10;
        }
        while(j>=0){
            int s=n2[j--]+carry;
            sum.push_back(s%10);
            carry=s/10;
        }
        if(carry!=0)
            sum.push_back(carry);
        i=sum.size()-1;
        ListNode* head=new ListNode(-1);
        ListNode* temp=head;
        while(i>=0){
            ListNode *node=new ListNode(sum[i--]);
            temp->next=node;
            temp=temp->next;
        }
        return head->next;
    }
};