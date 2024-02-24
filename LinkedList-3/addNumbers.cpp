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
Node* addTwoNumbers(Node* l1, Node* l2){
    Node* t = new Node(-1);
    Node* temp = t;
    int c = 0;
    while(l1!=NULL || l2!=NULL || c){
        int sum = 0;
        if(l1!=NULL){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2!=NULL){
            sum += l2->val;
            l2 = l2->next;
        }
        sum += c;
        c = sum/10;
        Node* n = new Node(sum%10);
        temp->next = n;
        temp = temp->next;
    }
    return t->next;
}
int main(){
    Node* a = new Node(9);
    Node* b = new Node(9);
    Node* c = new Node(9);
    Node* d = new Node(9);
    Node* e = new Node(9);
    Node* f = new Node(9);
    Node* g = new Node(9);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);
    Node* w = new Node(9);
    Node* x = new Node(9);
    Node* y = new Node(9);
    Node* z = new Node(9);
    w->next = x;
    x->next = y;
    y->next = z;
    display(w);
    Node* p = addTwoNumbers(a,w);
    display(p);

    return 0;
}