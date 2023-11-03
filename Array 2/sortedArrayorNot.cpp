#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]) {
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout<<"Array is sorted."<<endl;
    }else{
        cout<<"Araay is not sorted."<<endl;
    }
    return 0;
}