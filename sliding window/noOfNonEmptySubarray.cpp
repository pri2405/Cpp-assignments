#include<iostream>
#include<vector>
using namespace std;
//return the no. of non-empty subarrays of nums whose score is strictly less than k
long long countSubarrays(vector<int> &nums, int k){
    long long n = nums.size();
    long long i=0, j=0, sum=0, score=0;
    long long count = 0;
    while(j<n){
        sum += nums[j];
        score = sum * (j-i+1);
        while(i<=j && score >= k){
            sum -= nums[i++];
            score = sum*(j-i+1);
        }
        count += (j-i+1);
        j++;
    }
    return count;
} 
int main(){
    vector<int> v = {2,1,4,3,5};
    int k = 10;
    cout<<countSubarrays(v, k);

    return k;
}