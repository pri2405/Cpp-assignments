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
Node* mergeNodes(Node* head) {
    Node* t = new Node(0);
    t->next = head;
    Node* temp = t;
    int sum = 0;
    while(head!=NULL){
        if(head->val==0){
            temp->next = new Node(sum);
            temp = temp->next;
            sum = 0;
        }
        else{
            sum += head->val;
        }
        head = head->next;
    }
    return t->next->next;
}
int main(){
    Node* a = new Node(0);
    Node* b = new Node(3);
    Node* c = new Node(1);
    Node* d = new Node(0);
    Node* e = new Node(4);
    Node* f = new Node(5);
    Node* g = new Node(2);
    Node* h = new Node(0);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    display(a);
    Node* p = mergeNodes(a);
    display(p);

    return 0;
}