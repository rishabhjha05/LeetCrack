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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp= new ListNode(-1);
        ListNode* head=temp;
        ListNode* temp1=list1,*temp2=list2;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val>temp2->val){
                //ListNode* x=new ListNode(temp2->val);
                temp->next=temp2;
                temp=temp2;
                temp2=temp2->next;
            }
            else{
                //ListNode* x=new ListNode(temp1->val);
                temp->next=temp1;
                temp=temp1;
                temp1=temp1->next;
            }
        }
        if(temp1==NULL)
            temp->next=temp2;
        else
            temp->next=temp1;
        return head->next;
        
    }
};