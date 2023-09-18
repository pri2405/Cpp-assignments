#include<iostream>
using namespace std;

//Program to find the diff b/w ASCII of two characters

int main()
{
    char c1 , c2;
    cout<<"Enter first character: ";
    cin>>c1;
    cout<<"Enter second character: ";
    cin>>c2;

    int x = int(c1);
    int y = int(c2);

    cout<<(x-y)<<endl;
}