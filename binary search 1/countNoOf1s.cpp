#include<iostream>
using namespace std;
//program to count the no. of 1's in binary sorted array
int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the sorted binary array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //binary search
    //find first occurrence of 1
    int low = 0;  
    int high = n-1;  
    int fidx = -1;  //store first occurrence of 1
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==1){
            fidx = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    if(arr[n-1]==0 || fidx==-1) cout<<"total no. of 1's: 0";
    else 
        cout<<"total no. of 1's: "<<(n-fidx)<<endl;

    return 0;
}