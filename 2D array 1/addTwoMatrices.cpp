#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of columns: ";
    cin>>n;

    int arr1[m][n];
    cout<<"Enter the elements of 1st array: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr1[i][j];
        }
    }

    int arr2[m][n];
    cout<<"Enter the elements of 2nd array: "<<endl;
    // store the sum in 2nd array 
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr2[i][j];
            arr2[i][j] += arr1[i][j];
        }
    }
    //print 
    cout<<"sum of two matrices: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr2[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}