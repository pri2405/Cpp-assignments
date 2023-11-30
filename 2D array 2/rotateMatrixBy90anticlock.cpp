#include<iostream>
using namespace std;
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
    //tranpose of the matrix
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(a[i][j],a[j][i]);
        }
    }
    //swapping
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            swap(a[i][j],a[n-i-1][j]);
        }
    }
    cout<<"after rotating the matrix by 90 degrees anticlockwise: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}