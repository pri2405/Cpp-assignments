#include<iostream>
using namespace std;

//to check the area of circle is greater than circumference or not

int main()
{
    int r;
    cout<<"Enter the radius of circle: ";
    cin>>r;

    int area = 3.14*r*r;
    int c = 2*3.14*r;

    if(area>c){
        cout<<"Area is greater than circumference"<<endl;
    }else{
        cout<<"Circumference is greater than area"<<endl;
    }
    return 0;
}