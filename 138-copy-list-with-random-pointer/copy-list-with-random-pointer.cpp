/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        vector<Node*> vec1,vec2;
        Node *temp=head;
        Node *head2= new Node(-1),*temp2=head2;
        while(temp){
            Node *node=new Node(temp->val);
            temp2->next=node;
            temp2=temp2->next;
            temp=temp->next;
        }
        temp2->next=NULL;
        head2=head2->next;
        temp=head,temp2=head2;
        Node* d=head;
        while(temp){
            temp=temp->next;
            d->next=temp2;
            d=d->next;
            temp2=temp2->next;
            d->next=temp;
            d=d->next;

        }
        temp=head,temp2=head2;
        while(temp){
            if(temp->random)
                temp2->random=temp->random->next;
            temp=temp->next->next;
            if(temp2->next)
                temp2=temp2->next->next;
        }
        temp=head,temp2=head2;
        while(temp && temp2){
            cout<<"hi";
            temp->next=temp2->next;
            temp=temp->next;
            if(temp)
                temp2->next=temp->next;
            else
                temp2->next=NULL;
            temp2=temp2->next;

        }
        return head2;
    }
};