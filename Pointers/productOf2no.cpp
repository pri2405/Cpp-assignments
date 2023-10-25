#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter 1st number: ";
    cin>>x;
    cout<<"Enter 2nd number: ";
    cin>>y;

    int *p1 = &x;
    int *p2 = &y;
    cout<<"product = "<<(*p1)*(*p2);
    return 0;
}