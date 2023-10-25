#include<iostream>
using namespace std;
int main(){
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;  //now ptr points to b
    cout<<*ptr<<" "<<*ptr2;  // 20 20

    return 0;
}