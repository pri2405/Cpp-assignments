#include<iostream>
using namespace std;

//program to check the area of the rectangle is greater than its perimeter or not

int main()
{
    int l, b;
    cout<<"Enter the length of a rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of a rectangle: ";
    cin>>b;

    int area = l*b;
    int perimeter = 2*(l+b) ;

    if(area > perimeter){
        cout<<"Area is greater than perimeter."<<endl;
    }else{
        cout<<"Perimeter is greater than area."<<endl;
    }

    return 0;
}