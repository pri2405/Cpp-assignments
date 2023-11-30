#include<iostream>
using namespace std;
//program to change matrix if an element is 0, set its entire row and column to 0's
void changeMatrix(int arr[]){

}
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
    //change the matrix
    int idx = -1;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==0){
                idx = i;
                for(int k=0; k<m; k++){
                    a[k][j] = 0;
                }
                for(int l=0; l<n; l++){
                    a[i][l] = 0;
                }
                break;
            }
        }
        if(i==idx){
            break;
        }
    }
    // print the matrix
    cout<<"After changing the matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}