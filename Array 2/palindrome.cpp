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
    int i=0;
    bool flag = true;
    while(i<(n+1)/2){
        if(arr[i] != arr[n-i-1]){
            flag = false;
            break;
        }
        i++;
    }
    if(flag == true) cout<<"Array is a palindrome."<<endl;
    else cout<<"Array is not a palindrome."<<endl;

    return 0;
}