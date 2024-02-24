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
int getDecimalValue(Node* head) {
    int ans = 0;
    while(head!=NULL){
        ans = ans<<1;
        ans = ans | head->val;
        head = head->next;
    }
    return ans;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(1);
    Node* c = new Node(0);
    Node* d = new Node(1);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    cout<<getDecimalValue(a);

    return 0;
}