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
    ListNode* rev(ListNode *head){
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *prev=head,*curr=prev->next,*Next=curr->next;
        while(Next){
            curr->next=prev;
            prev=curr;
            curr=Next;
            Next=Next->next;
            cout<<"3 ";
        }
        head->next=NULL;
        curr->next=prev;
        return curr;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *p=head,*n1=head,*pp=NULL;
        bool found=false;
        while(n1){
            for(int i=1;i<k;i++)
                if(n1)
                    n1=n1->next;
            if(n1){
                ListNode *n2=n1->next;
                if(!found) head=n1,found=true;
                n1->next=NULL;
                n1=p;
                p=rev(p);
                if(pp)
                    pp->next=p;
                pp=n1;
                p=n2;
                n1->next=n2;
                n1=n2;
                cout<<"1 ";
            }
            cout<<"2 ";
        }
        return head;
    }
};