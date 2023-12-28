#include<iostream>
using namespace std;
//program to find kth smallest element of the array
int main(){
    int arr[] = {3,6,7,2,4,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2; // Kth smallest no. to find

    //bubbleSort
    for(int i=0;i<k;i++){
        bool flag = true; //means sorted array
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    cout<<k<<"th smallest element of the array: "<<arr[n-k]<<endl;

    return 0;
}