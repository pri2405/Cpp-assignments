#include<iostream>
#include<vector>
using namespace std;
//given an integer array which contains no. in range[1,n] & each integer appear once or twice
//return an array of all the integers which appears twice
vector<int> findDuplicates(vector<int> &nums){
    int i = 0;
    int n = nums.size();
    while(i<n){
        int correctIdx = nums[i] - 1;
        if(i==correctIdx || nums[i]==nums[correctIdx]) i++;
        else swap(nums[i], nums[correctIdx]);
    }
    vector<int> ans;
    for(int j=0; j<n; j++){
        if(j+1!=nums[j])  ans.push_back(nums[j]);
    }
    return ans;
}
int main(){
    vector<int> v = {4,3,2,7,8,2,3,1};   
    int n = v.size();

    vector<int> ans = findDuplicates(v);
    for(int ele : ans){
        cout<<ele<<" ";
    }

    return 0;
}