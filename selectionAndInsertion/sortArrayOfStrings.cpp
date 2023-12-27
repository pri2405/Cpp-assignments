#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string arr[] = {"coding","sorting","practice","office","student"};
    int n = sizeof(arr)/sizeof(arr[0]);

    //bubble sort
    for(int i=0;i<n;i++){
        bool flag = true; // means sorted array
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}