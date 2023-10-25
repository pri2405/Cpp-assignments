#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int *ptr = &a;   // *ptr = 10
    b = *ptr + 1;    // b = 10 + 1 = 11
    ptr = &b;        // *ptr = 11
    cout<<*ptr<<" "<<a<<" "<<b;

    return 0;
}