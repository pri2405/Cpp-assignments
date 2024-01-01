#include<iostream>
using namespace std; 
//program to apply binary search in array sorted in decreasing order
int main(){
    int arr[] = {17,11,9,7,5,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 1;

    //binary search
    int i = 0;
    int j = n-1;
    bool flag = false;  // it means target is not present
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==target) {
            flag = true; //means present in the array
            break;
        }
        else if(arr[mid]>target) i = mid+1;
        else j = mid-1;
    }
    if(flag==true) cout<<target<<" is present in the array"<<endl;
    else cout<<target<<" is not present in the array"<<endl;

    return 0;
}