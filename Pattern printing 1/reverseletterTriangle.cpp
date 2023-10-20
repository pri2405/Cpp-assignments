#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int k=i;k<=n-1;k++){
            cout<<"  ";
        }
        for(int j=1; j<=i;j++){
            cout<<char(j+65-1)<<" ";
        }cout<<endl;
    }

    return 0;
}