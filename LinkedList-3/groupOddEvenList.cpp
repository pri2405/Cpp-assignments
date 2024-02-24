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
Node* OddEvenList(Node* head){
    if(head==NULL && head->next==NULL) return head;
    Node* odd = head;
    Node* evn = head->next;
    Node* n = evn;
    while(evn!=NULL && evn->next!=NULL){
        odd->next = evn->next;
        odd = odd->next;
        evn->next = odd->next;
        evn = evn->next;
    }
    odd->next = n;
    return head;
}
int main(){
    Node* a = new Node(2);
    Node* b = new Node(1);
    Node* c = new Node(3);
    Node* d = new Node(5);
    Node* e = new Node(6);
    Node* f = new Node(4);
    Node* g = new Node(7);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);
    Node* p = OddEvenList(a);
    display(p);

    return 0;
}