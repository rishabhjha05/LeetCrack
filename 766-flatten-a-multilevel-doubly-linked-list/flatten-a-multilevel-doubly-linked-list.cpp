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
        vector<Node*> Child;
        while(temp){
            if(temp->next==NULL && Child.size()!=0){
                temp->next=Child[Child.size()-1];
                if(Child[Child.size()-1])
                    Child[Child.size()-1]->prev=temp;
                Child.pop_back();
            }
            if(temp->child!=NULL){
                Child.push_back(temp->next);
                temp->next=temp->child;
                temp->child->prev=temp;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp){
            temp->child=NULL;
            temp=temp->next;
        }
        return head;
    }
};