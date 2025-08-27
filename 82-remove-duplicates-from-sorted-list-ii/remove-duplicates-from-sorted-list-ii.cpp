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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> vec,vec2;
        ListNode* temp=head;
        while(temp){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        while(i<vec.size()){
            int j=i+1;
            while(j<vec.size() && vec[j]==vec[i])
                j++;
            if(j!=i+1)
                i=j;
            else
                vec2.push_back(vec[i++]);
        }
        for(int ele: vec2)
            cout<<ele<<" ";
        ListNode* head2=new ListNode(-1);
        temp=head2,i=0;
        while(i<vec2.size())
        {
            ListNode* node=new ListNode(vec2[i]);
            temp->next=node;
            temp=node;
            i++;
        }
        return head2->next;
    }
};