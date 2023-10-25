#include<iostream>
using namespace std;
void countDigitAndSquare(int x){
    int count = 0;
    while(x>0){
        count++;
        x/=10;
    }
    cout<<"Number of Digit: "<<count<<endl;
    cout<<"Square of "<<count<<": "<<count*count;
    return;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    countDigitAndSquare(n);

    return 0;
}