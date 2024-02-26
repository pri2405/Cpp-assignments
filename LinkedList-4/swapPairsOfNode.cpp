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
Node* swapPairs(Node* head) {
    if(head==NULL || head->next==NULL) return head;
    Node* prev = head;
    Node* curr = head->next->next;
    head = head->next;
    head->next = prev;
    while(curr!=NULL && curr->next!=NULL){
        prev->next = curr->next;
        prev = curr;
        Node* temp = curr->next->next;
        curr->next->next = curr;
        curr = temp;
    }
    prev->next = curr;
    return head;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    Node* p = swapPairs(a);
    display(p);

    return 0;
}