#include<iostream>
#include<vector>
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
int pairSum(Node* head) {
    int n = 0;   // length
    int ans = 0;
    vector<int> val;
    while(head!=NULL){
        n++;
        val.push_back(head->val);
        head = head->next;
    }
    for(int i=0; i< n/2; i++){
        ans = max(ans, val[i]+val[n-i-1]);
    }
    return ans;
}
int main(){
    Node* a = new Node(5);
    Node* b = new Node(4);
    Node* c = new Node(2);
    Node* d = new Node(1);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    cout<<pairSum(a);

    return 0;
}