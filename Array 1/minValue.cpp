#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    int min = INT16_MAX;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<min) min = arr[i];
    }
    cout<<"Minimum Value: "<<min<<endl;
    
    return 0;
}