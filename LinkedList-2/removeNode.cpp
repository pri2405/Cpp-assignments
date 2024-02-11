#include<iostream>
using namespace std;
class Node{ //user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* removeElements(Node* head, int val) {
    Node* newHead = new Node(-1);
    newHead->next = head;
    Node* prev = newHead;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->val==val){
            prev->next = temp->next;
            temp = temp->next;
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }
    return newHead->next;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(6);
    Node* d = new Node(3);
    Node* e = new Node(4);
    Node* f = new Node(5);
    Node* g = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);
    Node* t = removeElements(a,6);
    display(t);

    return 0;
}