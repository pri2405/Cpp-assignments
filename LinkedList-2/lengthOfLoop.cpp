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
class LinkedList{
public: 
    Node* head;
    Node* tail;
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void push(int x){
        Node* temp = new Node(x);
        if(head==NULL)  head = temp;
        else{
            temp->next = head;
            head = temp;
        }
        if(tail==NULL) tail = head;
    }
    void addCycle(int idx){
        Node* temp = head;
        idx--;
        while(idx--){
            temp = temp->next;
        }
        temp->next->next = head->next;
    }
    int findLength(){
        Node* slow = head;
        Node* fast = head->next;
        int f = 0;
        while(fast!=NULL && fast->next!=NULL){
            if(fast==slow){
                f = 1;
                break;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        if(f==0) return 0;
        int cnt = 1;
        slow = slow->next;
        while(slow!=fast){
            cnt++;
            slow = slow->next;
        }
        return cnt;
    }
};
int main(){
    LinkedList l1;
    l1.push(1);
    l1.push(2);
    l1.push(3);
    l1.push(4);
    l1.push(5);
    l1.push(6);
    l1.push(7);
    l1.display();
    l1.addCycle(5);
    cout<<l1.findLength()<<endl;

    return 0;
}