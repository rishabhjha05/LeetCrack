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
    ListNode *rev(ListNode* head){
        if(head==NULL|| head->next==NULL)
            return head;
        ListNode *prev=head,*curr=head->next,*Next=curr->next;
        while(Next){
            curr->next=prev;
            prev=curr;
            curr=Next;
            Next=Next->next;
        }
        curr->next=prev;
        head->next=NULL;
        return curr;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        int size=0;
        head=rev(head);
        ListNode *temp=head;
        while(temp)
        {
            size++;
            temp=temp->next;
        }
        vector<int> sol(size);
        stack<int> st;
        int i=size-1;
        temp=head;
        while(i>=0){
            while(st.size()!=0 && st.top()<=temp->val)
                st.pop();
            if(st.size()==0)
                sol[i]=0;
            else
                sol[i]=st.top();
            st.push(temp->val);
            temp=temp->next;
            i--;
        }
        return sol;
    }
};