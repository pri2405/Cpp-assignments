#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res){
    int i = 0;  //a
    int j = 0;  //b
    int k = 0;  //res
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            res[k++] = a[i++];
        }
        else{
            res[k++] = b[j++];
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++] = b[j++];
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }
}
void MergeSortInDescending(vector<int> &v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2 ,n2 = n - n/2;
    vector<int> a(n1), b(n2);
    //copy pasting
    for(int i=0; i<n1; i++){
        a[i] = v[i];
    }
    for(int i=0; i<n2; i++){
        b[i] = v[i+n1];
    }
    //recursion
    MergeSortInDescending(a);
    MergeSortInDescending(b);
    //merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    vector<int> arr = {12,6,34,7,10,5,15,20};
    cout<<"Given array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    MergeSortInDescending(arr);
    cout<<"sorted array in descending order: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}