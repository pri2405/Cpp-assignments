#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rec(vector<int> &nums, vector<int>&v, int idx, vector<vector<int>> &ans){
    if(idx>=nums.size()){
        if(find(ans.begin(), ans.end(), v)==ans.end()){
            ans.push_back(v);
        }
        return;
    }
    v.push_back(nums[idx]);
    rec(nums,v,idx+1,ans);
    v.pop_back();
    rec(nums,v,idx+1,ans);
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> v;
    sort(nums.begin(), nums.end());
    rec(nums,v,0,ans);

    return ans;
}
int main(){
    vector<int> nums = {1,2,2,3};
    vector<vector<int>> ans = subsetsWithDup(nums);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}