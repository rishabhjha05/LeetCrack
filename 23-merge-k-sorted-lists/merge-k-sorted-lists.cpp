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
    ListNode* merge(ListNode* a,ListNode* b){
        ListNode* temp=new ListNode(-1);
        ListNode* head=temp;
        while(a!=NULL && b!=NULL){
            if(a->val>b->val){
                temp->next=b;
                temp=b;
                b=b->next;
            }
            else{
                temp->next=a;
                temp=a;
                a=a->next;
            }
        }
        if(a==NULL)
            temp->next=b;
        else
            temp->next=a;
        return head->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        while(lists.size()>1)
        {
            ListNode* a=lists[0];
            lists.erase(lists.begin());
            ListNode* b=lists[0];
            lists.erase(lists.begin());
            ListNode* c=merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }
};