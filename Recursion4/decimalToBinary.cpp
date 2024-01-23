#include<iostream>
using namespace std;
int DecToBinary(int n){
    if(n==0) return 0;
    else return n%2 + 10*DecToBinary(n/2);
}
int main(){
    int n = 25;
    cout<<DecToBinary(n);

    return 0;
}