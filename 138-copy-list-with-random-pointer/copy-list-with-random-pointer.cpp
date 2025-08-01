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
        while(temp && temp2){
            vec1.push_back(temp);
            vec2.push_back(temp2);
            temp=temp->next;
            temp2=temp2->next;
        }
        vec1.push_back(NULL);
        vec2.push_back(NULL);
        temp=head,temp2=head2;
        while(temp && temp2){
            int i=0;
            while(i<vec1.size() && vec1[i]!=temp->random)
                i++;
            temp2->random=vec2[i];
            temp=temp->next;
            temp2=temp2->next;
        }
        return head2;
    }
};