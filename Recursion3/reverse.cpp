#include<iostream>
using namespace std;
void reverseNo(int n, int &rev){
    if(n==0) return;
    int dgt = n%10;
    rev = rev*10 + dgt;
    reverseNo(n/10, rev);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int rev = 0;
    reverseNo(n,rev);
    cout<<rev<<endl;

    return 0;
}