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
        if(i%2 == 0) arr[i] += 10;
        else arr[i]*=2;
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }

    return 0;
}