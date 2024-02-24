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
Node* insertionSortList(Node* head) {
    Node* t = new Node(0);
    Node* temp = t;
    Node* curr = head;
    Node* nxt = NULL;
    while(curr!=NULL){
        nxt = curr->next;
        temp = t;
        while(temp->next!=NULL && temp->next->val < curr->val){
            temp = temp->next;
        }
        curr->next = temp->next;
        temp->next = curr;
        curr = nxt;
    }
    return t->next;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(0);
    Node* c = new Node(2);
    Node* d = new Node(-3);
    Node* e = new Node(13);
    Node* f = new Node(5);
    Node* g = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);
    Node* p = insertionSortList(a);
    display(p);

    return 0;
}