#include<iostream>
using namespace std;
//program to search an element in infinite sorted array
int main(){
    int arr[] = {2,4,6,7,8,9,10,12,14,15,16,19,20,25,28};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = 1;
    int target = 6;
    while(arr[high]<target){
        low = high+1; 
        high *= 2;
    }
    //binary search
    bool flag = false;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            flag = true;
            break;
        }
        else if(arr[mid]>target) high = mid-1;
        else low = mid+1;
    }
    if(flag==true) cout<<target<<" is present in the array"<<endl;
    else cout<<target<<" is not present in the array"<<endl;

    return 0;
}