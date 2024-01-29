#include<iostream>
#include<vector>
using namespace std;
//given an array where all its elements are sorted in inc. order except two swapped ele
// sort in linear time
void merge(vector<int> &nums, int low, int mid, int high, int &rpCount){
        int b = mid+1;
        for(int a=low; a<=mid; a++){
            while(b<=high && nums[a]> (long long)2*nums[b])  b++;
            rpCount += b-(mid+1);
        }
        vector<int> temp;
        int i = low;
        int j = mid+1;
        while(i<=mid && j<=high){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i++]);
            }
            else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid){
            temp.push_back(nums[i++]);
        }
        while(j<=high){
            temp.push_back(nums[j++]);
        }
        int x = 0;
        for(int a=low; a<=high; a++){
            nums[a] = temp[x++];
        }
    }
    void mergeSort(vector<int> &nums, int low, int high, int & rpCount){
        if(low>=high) return;
        int mid = low + (high-low)/2;
        mergeSort(nums,low,mid,rpCount);
        mergeSort(nums,mid+1,high,rpCount);
        merge(nums,low,mid,high,rpCount);
    }
    int reversePairs(vector<int>& nums) {
        int rpCount = 0;
        int n = nums.size();
        mergeSort(nums,0,n-1,rpCount);
        return rpCount;
    }
int main(){
    vector<int> nums = {2,4,3,5,1};
    cout<<"No. of reverse pairs: "<<reversePairs(nums);

    return 0;
}