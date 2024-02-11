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
Node* mergeInBetween(Node* list1, int a, int b, Node* list2) {
    int cnt = 1;
    Node* temp = list1;
    Node* temp2 = list1;
    while(cnt<=a-1){
        if(temp!=NULL) temp = temp->next;
        temp2 = temp;
        cnt++;
    }

    //find node of b in list1
    if(a!=b){
        while(cnt<=b+1){
            if(temp2->next!=NULL)  temp2 = temp2->next;
            cnt++;
        }
    }
    else{
        temp2 = temp2->next->next;
    }
    // now add (a-1) node to the head  of list2 head
    temp->next = list2;
    Node* tail2 = list2;
    while(tail2->next!=NULL){
        tail2 = tail2->next;
    }
    //add tail of list2 to the b node of list1
    tail2->next = temp2;

    return list1;
}
int main(){
    Node* a = new Node(0);
    Node* b = new Node(1);
    Node* c = new Node(2);
    Node* d = new Node(3);
    Node* e = new Node(4);
    Node* f = new Node(5);
    Node* g = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);
    Node* p = new Node(100000);
    Node* q = new Node(100001);
    Node* r = new Node(100002);
    Node* s = new Node(100003);
    Node* t = new Node(100004);
    p->next = q;
    q->next = r;
    r->next = s;
    s->next = t;
    display(p);
    mergeInBetween(a,2,5,p);
    display(a);

    return 0;
}