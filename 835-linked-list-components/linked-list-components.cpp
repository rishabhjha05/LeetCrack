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
    int numComponents(ListNode* head, vector<int>& nums) {
        map<int,int> freq;
        for(int ele : nums)
            freq[ele]++;
        ListNode* temp=head;
        int count=0;
        while(temp){
            bool found=0;
            while(temp && freq[temp->val]!=0)
                temp=temp->next,found=1;
            if(found)
                count++;
            if(temp)
                temp=temp->next;
        }
        return count;
    }
};