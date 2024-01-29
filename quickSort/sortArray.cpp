#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//given an array where all its elements are sorted in inc. order except two swapped ele
// sort in linear time
int main(){
    vector<int> arr = {3,8,6,7,5,9,10};
    int n = arr.size();
    cout<<"Given array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int a = -1;  //stores first index
    int b = -1;  //stores 2nd index

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            if(a==-1){
                a = i;
                b = i+1;
            }
            else b = i+1;
        }
    }
    swap(arr[a],arr[b]);
    cout<<"After sorting"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}