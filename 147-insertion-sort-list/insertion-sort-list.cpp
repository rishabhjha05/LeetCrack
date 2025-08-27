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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> vec;
        ListNode* temp=head;
        while(temp){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        sort(vec.begin(),vec.end());
        ListNode* dummy=new ListNode(-1);
        temp=dummy;
        int i=0;
        while(i<vec.size()){
            ListNode* node =new ListNode(vec[i]);
            temp->next=node;
            temp=temp->next;
            i++;
        }
        return dummy->next;
    }
};