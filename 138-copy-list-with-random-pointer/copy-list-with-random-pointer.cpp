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
        unordered_map<Node*,Node*> map;
        while(temp){
            map[temp]=temp2;
            temp=temp->next;
            temp2=temp2->next;
        }
        temp=head,temp2=head2;
        while(temp){
            if(map.find(temp->random)!=map.end())
                temp2->random=map[temp->random];
            temp=temp->next;
            temp2=temp2->next;
        }
        return head2;
    }
};