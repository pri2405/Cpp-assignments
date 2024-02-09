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
class LinkedList{  // User defined data structure
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size)  cout<<"Invalid index"<<endl;
        else if(idx==0)  insertAtHead(val);
        else if(idx==size)  insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        else if(size==1) head = tail = NULL;
        else  head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return ;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1; i<=idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtTail(10);  // {10->NULL}
    ll.display();
    ll.insertAtTail(20);  //{10->20->NULL}
    ll.insertAtTail(30);  //{10->20->30->NULL}
    ll.insertAtTail(40);  //{10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(50);  //{50->10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(90);  //{90->50->10->20->30->40->NULL}
    ll.display();
    ll.insertAtIdx(3,80);  //{90->50->10->80->20->30->40->NULL}
    ll.display();
    cout<<ll.getAtIdx(4)<<endl;   //20
    ll.deleteAtHead();     // {50->10->80->20->30->40->NULL}
    ll.display();          
    ll.deleteAtTail();      // {50->10->80->20->30->NULL}
    ll.display();
    ll.deleteAtIdx(2);      // {50->10->20->30->NULL}
    ll.display();

    return 0;
}