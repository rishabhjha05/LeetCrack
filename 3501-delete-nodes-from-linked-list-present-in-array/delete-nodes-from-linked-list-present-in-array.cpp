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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int> freq;
        for(int ele : nums)
            freq[ele]++;
        for(auto i : freq)
            cout<<i.first<<" : "<<i.second<<"\n";
        ListNode *temp=head,*ptemp;
        while(freq[temp->val]!=0)
        {
            head=head->next;
            temp=head;
        }
        if(temp){
            temp=temp->next;
            ptemp=head;
        }
        while(temp){
            if(freq[temp->val]==0){
                ptemp->next=temp;
                ptemp=ptemp->next;
            }
            temp=temp->next;
        }
        ptemp->next=NULL;
        return head;
    }
};