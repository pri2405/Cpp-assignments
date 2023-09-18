#include <iostream>
using namespace std;

//Program to find volume of the cylinder

int main()
{
    int r,h;
    cout<<"Enter radius of the cylinder: ";
    cin>>r;
    cout<<"Enter height of the cylinder: ";
    cin>>h;

    float volume = 3.14*r*r*h;
    cout<<"Volume of the cylinder: "<<volume;

    return 0;
    
}