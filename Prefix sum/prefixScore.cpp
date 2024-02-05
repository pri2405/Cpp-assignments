#include<iostream>
#include<vector>
using namespace std;
//leetcode-2640
vector<long long> findPrefixScore(vector<int>& nums) {
    int n = nums.size();
    vector<long long> ans(n,0);
    long long max = nums[0];
    ans[0] = nums[0] + max;
    int i=1; 
    while(i<n){
        if(nums[i]>max)  max = nums[i];
        ans[i] = ans[i-1] + nums[i] + max;
        i++;
    }
    return ans;
}
int main(){
    vector<int> nums = {2,3,7,5,10};
    vector<long long> ans = findPrefixScore(nums);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}