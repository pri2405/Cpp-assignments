#include<iostream>
using namespace std;
int main(){
    // AP - 4, 7, 10, 13, 16, 19, ..........
    
    int n;
    cout<<"Enter n term: ";
    cin>>n;

    int a = 4;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a+=3;
    }
    return 0;
}