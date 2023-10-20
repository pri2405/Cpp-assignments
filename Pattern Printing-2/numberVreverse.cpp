#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1;j<2*n;j++){
            if(i+j==n+1 || (j==n+i-1)) cout<<i;
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}