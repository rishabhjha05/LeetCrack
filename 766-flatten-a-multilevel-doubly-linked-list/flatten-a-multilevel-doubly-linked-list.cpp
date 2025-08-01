/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node *temp=head;
        while(temp){
            if(temp->child!=NULL){
                Node *a=temp->next;
                Node *c=temp->child;
                temp->child=NULL;
                c=flatten(c);
                temp->next=c;
                c->prev=temp;
                while(temp->next)
                    temp=temp->next;
                temp->next=a;
                if(a!=NULL)
                    a->prev=temp;
            }
            temp=temp->next;
        }
        return head;
    }
};