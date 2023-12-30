#include<iostream>
using namespace std;
//program to find the last occurrence of 'x' in the array
int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the sorted array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the target: ";
    cin>>x;

    //binary search
    int low = 0;  
    int high = n-1;  
    int idx = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            idx = mid;
            low = mid + 1;
        }
        else if(arr[mid]>x) high = mid - 1;
        else low = mid + 1;
    }
    cout<<"last occurrence of "<<x<<" in the array at index: "<<idx<<endl;

    return 0;
}