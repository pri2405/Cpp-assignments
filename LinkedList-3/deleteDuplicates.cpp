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
Node* deleteDuplicates(Node* head) {
    if(head==NULL || head->next==NULL) return head;
        Node* t = new Node(-1);
        t->next = head;
        Node* temp = t;
        while(head!=NULL){
            if(head->next!=NULL && head->val==head->next->val){
                while(head->next!=NULL && head->val==head->next->val){
                    head = head->next;
                }
                temp->next = head->next;
            }
            else  temp = temp->next;
            head = head->next;
        }
        return t->next;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(1);
    Node* c = new Node(2);
    Node* d = new Node(3);
    Node* e = new Node(3);
    Node* f = new Node(5);
    Node* g = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);
    Node* p = deleteDuplicates(a);
    display(p);

    return 0;
}