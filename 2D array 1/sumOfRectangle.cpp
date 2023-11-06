#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of columns: ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter elements of the matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int l1, l2, r1, r2;
    cout<<"Enter l1 coordinate: ";
    cin>>l1;
    cout<<"Enter l2 coordinate: ";
    cin>>l2;
    cout<<"Enter r1 coordinate: ";
    cin>>r1;
    cout<<"Enter r2 coordinate: ";
    cin>>r2;

    int sum = 0;
    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum of the rectangle from (l1,r1) to (l2,r2): "<<sum;

    return 0;
    
}