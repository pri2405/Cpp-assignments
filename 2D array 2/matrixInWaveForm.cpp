#include<iostream>
using namespace std;
//program to print matrix elements in wave form
int main(){
    int m, n;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of columns: ";
    cin>>n;

    int a[m][n];
    cout<<"Enter elements of the matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Matrix elements are in wave form: "<<endl;
    int j = 0;
    while(j<n){
        if(j%2==0){  //bottom to top
            for(int i=m-1; i>=0; i--){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=0; i<m; i++){  // top to bottom
                cout<<a[i][j]<<" ";
            }
        }
        j++;
    }

    return 0;
}