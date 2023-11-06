#include<iostream>
using namespace std;
//program to store 10 at every index of a 2D matrix with 5 rows & 5 columns
int main(){
    int arr[5][5];
    cout<<"Enter the elements of 1st array: "<<endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            arr[i][j] = 10;
        }
    }
    //print
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}