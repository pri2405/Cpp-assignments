#include<iostream>
#include<vector>
using namespace std;
//Given an array of integers arr and two integers k and threshold
//return the no. of subarrays of size k and avg >= threshold
int NumOfSubarrays(vector<int> &v, int k, int th){
    int n = v.size();
    int sum = 0;
    int avg = 0;
    int count = 0;
    for(int i=0; i<k; i++){
        sum += v[i];
    }
    avg = sum/k;
    if(avg >= th) count++;
    int i=k;
    while(i<n){
        sum -= v[i-k];
        sum += v[i];
        avg = sum/k;
        if(avg >= th) count++;
        i++;
    }
    return count;
}
int main(){
    vector<int> arr = {11,13,17,23,29,31,7,5,2,3};
    int k = 3;   //size of subarray
    int th = 5;    //target value

    cout<<NumOfSubarrays(arr, k, th)<<endl;

    return 0;
}