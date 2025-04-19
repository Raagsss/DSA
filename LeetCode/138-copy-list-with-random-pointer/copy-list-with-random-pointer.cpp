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
private:
    void insertAtTail(Node* &head,Node* &tail,int data) {
        Node* newNode=new Node(data);
        if(head==NULL) {
            head=newNode;
            tail=newNode;
        }else {
            tail->next=newNode;
            tail=newNode;
        }
    }
public:
    Node* copyRandomList(Node* head) {
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;

        Node* temp=head;
        while(temp!=NULL) {
            insertAtTail(cloneHead,cloneTail,temp->val);
            temp=temp->next;
        }

        unordered_map<Node*,Node*> mapping;
        Node* originalNode=head;
        Node* cloneNode=cloneHead;
        while(originalNode!=NULL && cloneNode!=NULL) {
            mapping[originalNode]=cloneNode;
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }

        originalNode=head;
        cloneNode=cloneHead;
        while(originalNode!=NULL) {
            if(originalNode->random!=NULL){
                cloneNode->random=mapping[originalNode->random];
            }else {
                cloneNode->random=NULL;
            }
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        return cloneHead;
    }
};