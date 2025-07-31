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
    vector<int> nodesBetweenCriticalPoints(ListNode* head){
        vector<int> idx;
        ListNode*temp=head;
        int i=1;
        while(temp->next->next){
            ListNode *prev=temp,*curr=temp->next,*Next=curr->next;
            if(prev->val>curr->val && curr->val<Next->val)
                idx.push_back(i);
            if(prev->val<curr->val && curr->val>Next->val)
                idx.push_back(i);
            temp=temp->next;
            i++;
        }
        vector<int> sol(2,-1);
        if(idx.size()<2)
            return sol;
        int n=idx.size(), mn=INT_MAX,max=idx[n-1]-idx[0];
        i=1;
        while(i<n){
            int x=idx[i]-idx[i-1];
            mn=min(mn,x);
            i++;
        }
        sol[0]=mn;
        sol[1]=max;
        return sol;
    }
};