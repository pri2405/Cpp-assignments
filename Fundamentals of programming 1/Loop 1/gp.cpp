#include<iostream>
using namespace std;
int main(){
    // GP - 3,12, 48,.........

    int n;
    cout<<"Enter n term: ";
    cin>>n;

    int a=3;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a *= 4;
    }

    return 0;
}