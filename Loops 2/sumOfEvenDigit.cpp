#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a  number: ";
    cin>>n;

    int sum =0;
    while(n>0){
        int lastDigit = n%10;
        if(lastDigit%2 == 0)  sum+=lastDigit;
        n/=10;
    }
    cout<<"sum of even digit of a number: "<<sum<<endl;

    return 0;
}