#include<iostream>
#include<vector>
using namespace std;
//leetcode(303)
vector<int> v;
void NumArray(vector<int>& nums) {
    v.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++){
        int sum = nums[i]+v[i-1];
        v.push_back(sum);
    }
}

int sumRange(int left, int right) {
    if(left==0) return v[right];

    return v[right]-v[left-1];
}
int main(){
    vector<vector<int>> arr= {{-2,0,3,-5,2,-1}, {0,2}, {2,5}, {0,5}};
    for(int i=0; i<arr.size(); i++){
        if(i==0) NumArray(arr[0]);
        else cout<<sumRange(arr[i][0], arr[i][1])<<" ";
    }

    return 0;
}
