#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    int max1 = INT16_MIN,max2 = INT16_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i]>max2 && max1 != arr[i]){
            max2 = arr[i];
        }
    } 
    if(max2 == INT16_MIN){
        cout<<"All elements are same"<<endl;
    }
    else   cout<<"Second largest element: "<<max2<<endl;

    return 0;
}