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
        vector<ListNode*>  vec;
        ListNode* temp=head;
        int size=0;
        while(temp){
            size++;
            temp=temp->next;
        }
        int n=size/k,rmd=size%k;
        temp=head;
        while(temp){
            ListNode* Node=new ListNode(-1);
            ListNode* temp2=Node;
            for(int i=0;i<n+(rmd!=0)? 1:0;i++){
                temp2->next=temp;
                temp2=temp2->next;
                temp=temp->next;
            }
            if(rmd>0)
                rmd--;
            temp2->next=NULL;
            vec.push_back(Node->next);
        }
        while(vec.size()<k)
            vec.push_back(NULL);
        return vec;
    }
};