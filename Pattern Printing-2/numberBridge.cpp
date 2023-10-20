#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;

    for(int i=0; i<n; i++){
        if(i==0){
            for(int j=1;j<=n;j++){
            cout<<j;
            }
            for(int j=n-1;j>0;j--){
                cout<<j;
            }
        }else{
        for(int k=1;k<=n-i;k++){
            cout<<k;
        }
        for(int l=1;l<=2*i-1;l++){
            cout<<" ";
        }
        for(int m=n-i;m>=1;m--){
            cout<<m;
        }
        }
        cout<<endl;
    } 

    return 0;
}