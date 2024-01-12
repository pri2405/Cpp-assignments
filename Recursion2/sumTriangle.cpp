#include<iostream>
#include<vector>
using namespace std;
void sumTriangle(vector<int> &arr, int n){
    if(n==0) return;
    vector<int> ans(n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        if(i != 0) ans[i-1] = arr[i-1] + arr[i];
    }
    cout<<endl;
    sumTriangle(ans, n-1);
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
    sumTriangle(v, n);
    return 0;
}