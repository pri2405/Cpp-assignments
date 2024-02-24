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
int length(Node* head){
    int l = 0;
    while(head!=NULL){
        head = head->next;
        l++;
    }
    return l;
}
Node* reverseKGroup(Node* head, int k) {
    int n = length(head);
    if(head==NULL || n<k)  return head;
    Node* temp = new Node(-1);
    temp->next = head;
    Node* curr = temp;
    Node* prev = temp;
    Node* nxt = temp;
    while(n>=k){
        curr = prev->next;
        nxt = curr->next;
        for(int i=1; i<k; i++){
            curr->next = nxt->next;
            nxt->next = prev->next;
            prev->next = nxt;
            nxt = curr->next;
        }
        prev = curr;
        n = n-k;
    }
    return temp->next;
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
    Node* p = reverseKGroup(a,k);
    display(p);

    return 0;
}