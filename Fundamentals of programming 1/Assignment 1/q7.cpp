#include<iostream>
using namespace std;

//To check if a point lies on x-axis, y-axis or origin

int main()
{
    int a, b;
    cout<<"Enter the points: ";
    cin>>a>>b;

    if(a==0){
        if(a==0 && b==0){
            cout<<"the point is at the origin."<<endl;
        }else{
            cout<<"the point lies on the y-axis."<<endl;
        }
    }else if(b==0){
        cout<<"the point is lies on the x-axis."<<endl;
    }else{
        cout<<"the point is in x-y plane"<<endl;
    }

    return 0;
}