#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter odd size of square matrix: ";
    cin>>n;

    int arr[n][n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        cin>>arr[i][j];
        }
    }
    cout<<"Elements of middle row and middle column: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==n/2 || j==n/2){
                cout<<arr[i][j]<<" ";
            }
            else cout<<"  ";
        }cout<<endl;
    }
    return 0;
}