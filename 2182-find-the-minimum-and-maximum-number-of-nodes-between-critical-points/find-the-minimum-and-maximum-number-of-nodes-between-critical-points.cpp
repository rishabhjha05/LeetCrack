/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next)
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head){
        
    vector<int> idx;
    int size = 0;
    ListNode *temp = head;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    temp = head;
    for (int i = 1; i < size - 1; i++)
    {
        int val = temp->next->val;
        if (val > temp->val && val > temp->next->next->val)
            idx.push_back(i);
        else if (val < temp->val && val < temp->next->next->val)
            idx.push_back(i);
        temp=temp->next;
    }
    vector<int> ans(2, -1);
    if (idx.size() < 2)
        return ans;
    else
    {
        int maxdis = idx[idx.size() - 1] - idx[0];
        int mindis = INT_MAX;
        for (int i = 0; i < idx.size() - 1; i++)
        {
            int x = idx[i + 1] - idx[i];
            mindis = min(mindis, x);
        }
        ans[0] = mindis;
        ans[1] = maxdis;
    }
    return ans;
    }
};