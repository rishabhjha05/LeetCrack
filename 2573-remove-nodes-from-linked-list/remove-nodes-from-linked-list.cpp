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
    ListNode* rev(ListNode* head){
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *prev=head,*curr=prev->next,*Next=curr->next;
        while(Next){
            curr->next=prev;
            prev=curr;
            curr=Next;
            Next=Next->next;
        }
        head->next=NULL;
        curr->next=prev;
        return curr;
    }
    ListNode* removeNodes(ListNode* head) {
        stack<int> NextG;
        head=rev(head);
        int size=0,i;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            size++;
        }
        vector<int> idx(size);
        i=size-1;
        temp=head;
        while(i>=0)
        {
            while(NextG.size()!=0 && NextG.top()<=temp->val)
                NextG.pop();
            if(NextG.size()==0)
                idx[i]=-1;
            else
                idx[i]=NextG.top();
            NextG.push(temp->val);
            temp=temp->next;
            i--;
        }
        head=rev(head);
        ListNode *head2=new ListNode(-1);
        ListNode *temp2=head2;
        i=0;
        temp=head;
        while(i<size){
            if(idx[i]==-1){
                temp2->next=temp;
                temp2=temp2->next;
            }
            temp=temp->next;
            i++;
        }
        temp2->next=NULL;
        return head2->next;
    }
};