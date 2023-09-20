#include <iostream>
using namespace std;

//to check whether a triangle is equilateral, scalene or isosceles

int main()
{
    int a, b, c;
    cout<<"Enter the sides of a triangle:"<<endl;
    cout<<"side1 = ";
    cin>>a;
    cout<<"side2 = ";
    cin>>b;
    cout<<"side3 = ";
    cin>>c;

    if(a ==b && b== c){
        cout<<"This is an Equilateral triangle."<<endl;
    }else if(a ==b || a ==c || b ==c){
        cout<<"This is an Isosceles triangle."<<endl;
    }else{
        cout<<"This is a Scalene triangle."<<endl;
    }

    return 0;

}