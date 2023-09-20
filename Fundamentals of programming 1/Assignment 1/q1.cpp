#include <iostream>
using namespace std;

//program to print the greatest of two numbers

int main()
{
    int a,b;
    cout<<"Enter first no: ";
    cin>>a;
    cout<<"Enter 2nd no.";
    cin>>b;

    if(a>b){
        cout<<"first number "<<a<<" is the largest"<<endl;
        }else{
            cout<<"second number "<<b<<" is the largest"<<endl;
        }
    return 0;
}