#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,5,1,8,4,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    //insertion sort
    for(int i=1; i<n; i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    //storing the sorted array into an integer
    int s = 0;  //first min no
    for(int i=0;i<n;i++){
        s *= 10;
        s += arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    int t = 0;  //second min no
    for(int i=0;i<n;i++){
        t *= 10;
        t += arr[i];
    }
    cout<<"First minimum number: "<<s<<endl;
    cout<<"second minimum number: "<<t<<endl;
    cout<<"minimum possible sum: "<<s+t;
    return 0;
}