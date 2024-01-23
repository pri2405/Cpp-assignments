#include<iostream>
#include<vector>
using namespace std;
void Subsets(vector<int> &arr, int idx, vector<int> &nums, vector<vector<int>> &ans){
    if(idx==nums.size()){
        ans.push_back(arr);
        return;
    }
    arr.push_back(nums[idx]);
    Subsets(arr,idx+1, nums, ans);
    arr.pop_back();
    Subsets(arr,idx+1, nums,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        Subsets(arr, 0, nums, ans);
        return ans;
    }
int main(){
    vector<int> nums = {1,2,3,4};
    vector<vector<int>> ans = subsets(nums);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}