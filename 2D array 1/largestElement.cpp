#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows: ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns: ";
    cin>>n;

    int arr[m][n];
    int max = INT16_MIN;
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
        cin>>arr[i][j];
        if(arr[i][j]>max) max = arr[i][j];
        }
    }
    cout<<"Largest element in the array: "<<max<<endl;
    
    return 0;
}