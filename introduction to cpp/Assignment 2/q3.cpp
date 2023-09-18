#include <iostream>
using namespace std;

int main()
{
    int x,y;   
    cin>>x>>y;   //let x=2, y=3
    x+=y;    // x = 2+3 = 5
    x-=y;    // x = 5-3 = 2
    x%=y;    // x = 2%3 = 2 
    cout<<x;    //x = 2

    return 0;

}