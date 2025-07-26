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

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right || head->next==NULL) return head;
        else if(head->next->next==NULL) return reverseList(head);
        ListNode *a=NULL,*b=NULL,*c=NULL,*d=NULL;
        ListNode *temp=head;
        int n=1;
        while(temp!=NULL){
            cout<<n<<endl;
            if(n==left-1)
                a=temp;
            if(n==left)
                b=temp;
            if(n==right)
                c=temp;
            if(n==right+1){
                d=temp;
                break;
            }
            temp=temp->next;
            n++;
        }
        if(a!=NULL)
            a->next=NULL;
        c->next=NULL;
        c=reverseList(b);
        if(a!=NULL)
            a->next=c;
        b->next=d;
        if(a==NULL)
            return c;
        return head;
    }
};