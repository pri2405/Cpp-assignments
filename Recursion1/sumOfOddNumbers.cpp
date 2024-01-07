#include<iostream>
using namespace std;
//program to calculate the sum of odd numbers b/w a and b(both inclusive)
int sumOfOddNo(int x, int y){
    if(x>y) return 0;
    if(x%2==0) return sumOfOddNo(x+1,y-1);
    return x + sumOfOddNo(x+2,y);
}
int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    cout<<sumOfOddNo(a,b)<<endl;

    return 0;
}