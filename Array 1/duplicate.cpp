#include<iostream>
#include<algorithm>
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
    bool flag = false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                flag = true;
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    if(flag == false) cout<<"No duplicate found"<<endl;
    return 0;
}