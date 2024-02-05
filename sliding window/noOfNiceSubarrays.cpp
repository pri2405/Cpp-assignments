#include<iostream>
#include<vector>
using namespace std;
//A continous subarray is called nice if there are k odd no. in array.
//return the no. of nice subarray.
int noOfSubarrays(vector<int> &nums, int k){
    int n = nums.size();
    int i=0, j=0, odd=0, count=0;
    int ans = 0;
    while(j<n){
        if(nums[j]%2!=0){
            count = 0;
            odd++;
        }
        while(i<=j && odd==k){
            count++;
            if(nums[i++]%2 != 0) odd--;
        }
        ans += count;
        j++;
    }
    return ans;
}
int main(){
    vector<int> v = {2,2,2,1,2,2,1,2,2,2};
    int k = 2;
    cout<<noOfSubarrays(v,k);

    return 0;
}