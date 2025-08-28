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
    int pairSum(ListNode* head) {
        int mx=INT_MIN;
        vector<int> vec;
        ListNode* temp=head;
        while(temp){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,j=vec.size()-1;
        while(i<j)
            mx=max(mx,vec[i++]+vec[j--]);
        return mx;
    }
};