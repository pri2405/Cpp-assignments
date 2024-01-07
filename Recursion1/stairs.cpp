#include<iostream>
using namespace std;
//program to find no. of ways in which a person can climb n stairs
//if he can take exactly 1,2or 3 steps at each level
int NoOfWays(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return NoOfWays(n-1)+NoOfWays(n-2)+NoOfWays(n-3);
}
int main(){
    int n;
    cout<<"Enter no. of stairs: ";
    cin>>n;
    cout<<NoOfWays(n);

    return 0;
}