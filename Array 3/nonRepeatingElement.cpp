#include<iostream>
#include<vector>
using namespace std;
void firstNonRepeatingEle(vector<int>&v, int n){
    bool flag = false;

    for(int i=0; i<n; i++){
        int j;
        for(j=0; j<n; j++){
            if(i!=j &&v[i]==v[j]) break;
        }
        if(j == n){
            cout<<v[i]<<" is the first non-repeating element."<<endl;
            flag = true;
            break;
        }
    }
    if(flag==false) cout<<"There is no non-repeating element in the array."<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    firstNonRepeatingEle(arr,n);

    return 0;
}