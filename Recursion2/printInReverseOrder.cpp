#include<iostream>
#include<vector>
//print all elements of array in reverse order using recursion
using namespace std;
void printEleInReverseOrder(vector<int> &arr, int idx, int n){
    if(idx==n) return;
    printEleInReverseOrder(arr,idx+1,n);
    cout<<arr[idx]<<" ";
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    printEleInReverseOrder(v,0,n);

    return 0;
}