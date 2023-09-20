#include<iostream>
using namespace std;

//to check the year is leap year or not

int main()
{
    int a;
    cout <<"Enter the year: ";
    cin>>a;

    if(a%400==0){
        cout<<"Yes, "<<a<<" is leap year"<<endl;
    }else if( a % 100 == 0){
        cout<<"No,"<<a<<" is not leap year"<<endl;
    }else if( a%4 == 0){
        cout<<"Yes, "<<a<<" is leap year"<<endl;
    }else{
         cout<<"No,"<<a<<" is not leap year"<<endl;
    }

    return 0;
}