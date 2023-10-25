#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: ";
    int product = 1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        product *=arr[i];
    }
    cout<<"Product = "<<product<<endl;

    return 0;
}