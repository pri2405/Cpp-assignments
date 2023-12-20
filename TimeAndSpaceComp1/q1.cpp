#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int c = 0;
    for(int i = n; i>0; i/=2){  // Time complexity -> O(log n)
        c++;
    } 
    return 0;
}