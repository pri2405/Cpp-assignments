#include <iostream>
using namespace std;

int main(){

    int x;
    cout<<"Enter first number\n";
    cin>>x; //user will give 'x' a value.
    int y,m;
    cout<<"Enter second number and value for taking modulus\n";
    cin>>y>>m; //user will give 'y' a value.
    int z = (x*y)%m;
    cout<<"Output is: "<<z;

    return 0;
    
}