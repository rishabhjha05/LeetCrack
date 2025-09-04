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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> nums;
        ListNode *temp=head;
        int size=0,i;
        while(temp){
            nums.push_back(temp->val);
            temp=temp->next;
            size++;
        }
        vector<int> sol(size);
        stack<int> st;
        i=size-1;
        while(i>=0){
            while(st.size()!=0 && st.top()<=nums[i])
                st.pop();
            if(st.size()==0)
                sol[i]=0;
            else
                sol[i]=st.top();
            st.push(nums[i]);
            i--;
        }
        return sol;
    }
};