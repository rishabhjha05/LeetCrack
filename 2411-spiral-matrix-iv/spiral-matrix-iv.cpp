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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
    ListNode *temp = head;
    vector<vector<int>> sol(m, vector<int>(n, -1));
    int minrow = 0, maxrow = m - 1, mincol = 0, maxcol = n - 1;
    while (minrow <= maxrow && mincol <= maxcol)
    {
        for (int j = mincol; j <= maxcol && temp; j++)
        {
            sol[minrow][j] = temp->val;
            temp = temp->next;
        }
        minrow++;
        for (int i = minrow; i <= maxrow && temp; i++)
        {
            sol[i][maxcol] = temp->val;
            temp = temp->next;
        }
        maxcol--;
        for (int j = maxcol; j >= mincol && temp; j--)
        {
            sol[maxrow][j] = temp->val;
            temp = temp->next;
        }
        maxrow--;
        for (int i = maxrow; i >= minrow && temp; i--)
        {
            sol[i][mincol] = temp->val;
            temp = temp->next;
        }
        mincol++;
        if(temp==NULL) return sol;
    }
    return sol;
    }
};