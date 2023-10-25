#include<iostream>
using namespace std;
//program to find the smallest missing positive element in sorted array
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x = 0;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i] != x){
            cout<<x<<endl;
            flag = true;
            break;
        }
        else  x++;
    }
    if(flag == false) cout<<x<<endl;
    return 0;
}