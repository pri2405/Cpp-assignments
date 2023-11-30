#include<iostream>
using namespace std;
//program to print the elements of both the diagonals in a square matrix
int main(){
    int n;
    cout<<"Enter size of square matrix: ";
    cin>>n;

    int a[n][n];
    cout<<"Enter elements of the square matrix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    cout<<"Diagonal Elements: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j || i+j==n-1) cout<<a[i][j];
            else cout<<" ";
        }cout<<endl;
    }

    return 0;
}