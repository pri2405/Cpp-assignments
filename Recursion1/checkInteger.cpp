#include<iostream>
using namespace std;
//program to check if positive integer is a power of 2
bool check(int n){
    if(n==1) return true;
    if(n%2 != 0) return false;
    return check(n/2);
}
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    if(check(n)==1) cout<<"yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}