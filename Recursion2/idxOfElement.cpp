#include<iostream>
#include<vector>
using namespace std;
int findElement(vector<int> &arr, int idx, int n, int k){
    if(idx==n) return -1;
    if(arr[idx]==k) return idx;
    findElement(arr,idx+1,n,k);
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
    int k;
    cout<<"Eneter target: ";
    cin>>k;

    cout<<findElement(v,0,n,k);

    return 0;
}