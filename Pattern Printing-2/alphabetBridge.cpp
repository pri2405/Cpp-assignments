#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;

    for(int i=0; i<n; i++){
        if(i==0){
            for(int j=1;j<=2*n-1;j++){
            cout<<char(j+65-1)<<" ";
            }
        }else{
        for(int k=1;k<=n-i;k++){
            cout<<char(k+65-1)<<" ";
        }
        for(int l=1;l<=2*i-1;l++){
            cout<<"  ";
        }
        for(int m=n+i;m<2*n;m++){
            cout<<char(m+65-1)<<" ";
        }
        }
        cout<<endl;
    } 

    return 0;
}