#include<iostream>
#include<vector>
using namespace std;
int go(vector<int> &v, int value, int size){
    int carry = 0;
    for(int i=0; i<size; i++){
        int product = v[i]*value + carry;
        v[i] = product % 10;
        carry = product/10;
    }
    while(carry){
        v[size] = carry%10;
        carry /= 10;
        size++;
    }
    return size;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    vector<int> arr(500,0);
    int size = 1;
    arr[0] = 1;

    for(int i=2; i<=n; i++){
        size = go(arr, i, size);
    }

    for(int i = size-1; i>=0; i--) cout<<arr[i];

    return 0;
}