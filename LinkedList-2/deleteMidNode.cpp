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
Node* deleteMiddle(Node* head) {
        if(head==NULL || head->next==NULL) return NULL;
        if(head->next->next==NULL){
            head->next = NULL;
            return head;
        }
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->val = slow->next->val;
        slow->next = slow->next->next;
        return head;
    }
int main(){
    Node* a = new Node(1);
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(7);
    Node* e = new Node(1);
    Node* f = new Node(2);
    Node* g = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);
    cout<<"After deletion of middle node:"<<endl;
    deleteMiddle(a);
    display(a);

    return 0;
}