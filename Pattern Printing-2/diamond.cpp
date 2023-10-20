#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;

    for(int i=1; i<=2*n+1; i++){
        for(int j=1;j<=2*n+1;j++){
            if(i==n+1 || j==n+1 || j+i==n+2 || j==n+i || i==n+j || i+j==3*n+2) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}