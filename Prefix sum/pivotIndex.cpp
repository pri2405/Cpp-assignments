#include<iostream>
#include<vector>
using namespace std;
//return pivit index (leetcode 724)
int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    int idx = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += nums[i];
    }
    int leftSum = 0;
    while(idx<n){
        if(idx!=0)  leftSum += nums[idx-1];
        int rightSum = sum - leftSum - nums[idx];
        if(leftSum==rightSum) return idx;
        idx++;
    }
    return -1;
}
int main(){
    vector<int> nums = {1,7,3,6,5,6};
    cout<<pivotIndex(nums);   //3

    return 0;
}