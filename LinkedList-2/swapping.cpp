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
Node* swapNodes(Node* head, int k) {
    int n = 1;
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
        n++;
    }
    temp = head;
    int f = 1;
    while(f<k){
        temp = temp->next;
        f++;
    }
    Node* t1 = temp;
    temp = head;
    f = 1;
    while(f<n-k+1){
        temp = temp->next;
        f++;
    }
    Node* t2 = temp;
    swap(t1->val, t2->val);
    return head;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    int k = 2;
    swapNodes(a,k);
    display(a);

    return 0;
}