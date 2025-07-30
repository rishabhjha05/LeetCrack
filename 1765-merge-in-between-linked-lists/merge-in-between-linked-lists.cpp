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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *temp=list1,*p1=NULL,*p2=NULL;
        int n=0;
        while(temp){
            if(n==a-1)
                p1=temp;
            if(n==b+1)
            {
                p2=temp;
                break;
            }
            temp=temp->next;
            n++;
        }
        p1->next=list2;
        temp=list2;
        while(temp->next)
            temp=temp->next;
        temp->next=p2;
        return list1;
    }
};