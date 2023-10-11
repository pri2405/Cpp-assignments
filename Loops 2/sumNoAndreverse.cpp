#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //reverse
    int a = n;
    int r=0;
    while(n>0){
        r *= 10;
        r += n%10;
        n/=10;
    }
    cout<<a+r<<" ["<<a<<"+"<<r<<"]"<<endl;

    return 0;
}