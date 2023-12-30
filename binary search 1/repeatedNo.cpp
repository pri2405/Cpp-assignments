#include<iostream>
using namespace std;
//return repeated no. of the array contains (n+1) integers in range [1,n]
int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the sorted array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    int rpt = 0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==mid && arr[mid-1]==mid){
            rpt = mid;
            break;
        }
        else if(arr[mid]==mid+1) low = mid + 1;
        else high = mid - 1;
    }
    cout<<"Repeated no. in the array: "<<rpt<<endl;

    return 0;
}