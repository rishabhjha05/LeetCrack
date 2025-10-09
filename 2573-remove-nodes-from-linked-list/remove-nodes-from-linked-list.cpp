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
    int size(ListNode *head)
{
    ListNode *temp = head;
    int size = 0;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
    ListNode* removeNodes(ListNode* head) {
        
    head = rev(head);
    stack<int> nextG;
    ListNode *temp = head;
    int len = size(head), i = len - 1;
    vector<int> NextG(len);
    while (i >= 0)
    {
        while (nextG.size()!=0 && nextG.top() <= temp->val)
            nextG.pop();
        if (nextG.size()!=0)
            NextG[i] = nextG.top();
        else
            NextG[i] = -1;
        nextG.push(temp->val);
        temp = temp->next;
        i--;
    }
    head = rev(head);
    temp = head, i = 0;
    ListNode *head2 = new ListNode(-1), *temp2 = head2;
    while (temp)
    {
        if (NextG[i] == -1)
        {
            temp2->next = temp;
            temp2 = temp;
        }
        temp = temp->next;
        i++;
    }
    return head2->next;
    }
};