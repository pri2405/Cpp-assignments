#include<iostream>
#include<vector>
using namespace std;
//find the no. that occurs twice and the no. that is missing & return them in form of array
//array contains numbers from 1 to n but due to error one no. is missing 
vector<int> findErrorNums(vector<int> &nums){
    int i = 0;
    int n = nums.size();
    while(i<n){
        int correctIdx = nums[i] - 1;
        if(i==correctIdx || nums[i]==nums[correctIdx]) i++;
        else swap(nums[i], nums[correctIdx]);
    }
    for(int j=0; j<n; j++){
        if(j+1 != nums[j])  return {nums[j],j+1};
    }
    return {};
}
int main(){
    vector<int> arr = {1,2,2,4};
    int n = arr.size(); 

    vector<int> ans = findErrorNums(arr);
    for(int ele : ans){
        cout<<ele<<" ";
    }

    return 0;
}