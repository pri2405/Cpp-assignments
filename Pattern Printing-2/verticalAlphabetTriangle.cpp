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
        for(int l=i;l>=1;l--){
            cout<<char(l+65-1)<<" ";
        }
        for(int j=1; j<i;j++){
            cout<<char(j+65)<<" ";
        }cout<<endl;
    }

    return 0;
}