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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
    vector<ListNode *> ans;
    int size = 0;
    ListNode *temp = head;
    while (temp)
    {
        temp = temp->next;
        size++;
    }
    int n = size / k, rmd = size % k;
    temp = head;
    if(size<k){
        while(temp){
            ListNode *Node = new ListNode(temp->val);
            ans.push_back(Node);
            temp=temp->next;
        }
        for(int i=0;i<k-size;i++)
            ans.push_back(NULL);
    }
    else{
    while (temp)
    {
        for (int i = 1; i < n + (rmd!=0) ? 1 : 0; i++)
            temp = temp->next;
        ans.push_back(head);
        if(temp){
        head = temp->next;
        temp->next = NULL;
        temp=head;
        }
        if (rmd)
            rmd--;
    }
    }
    return ans;
    }
};