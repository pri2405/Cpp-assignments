#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int c = 0;
    for(int i = n; i>1; i/=i){   //  Time complexity -> O(1)
        c++;
    }
    return 0;
}