#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of the array: "<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag = true;  // means sorted array
    if(arr[0]<arr[1]){
        for(int i=1; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                flag = false;
                break;
            }
        }
        if(flag==true){
            cout<<"array is sorted in ascending order."<<endl;
        }
    }
    else{
        for(int i=1; i<n-1; i++){
            if(arr[i]<arr[i+1]){
                flag = false;
                break;
            }
        }
        if(flag==true){
            cout<<"array is sorted in descending order."<<endl;
        }
    }
    if(flag==false){
        cout<<"Given array is not sorted."<<endl;
    }

    return 0;
}