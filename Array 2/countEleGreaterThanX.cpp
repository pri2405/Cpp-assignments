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
    int x;
    cout<<"Enter Target: ";
    cin>>x;

    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]>x) count++;
    }

    cout<<"No. of elements greater than "<<x<<": "<<count<<endl;

    return 0;
}