#include<iostream>
#include<vector>
using namespace std;
//program to search element in rotated sorted array
bool search(vector<int> &v, int target){
    int low = 0;
    int  high = v.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(v[mid]==target) return true;
        else if(v[mid]>=v[low]){
            if(target>=v[low] && target <=v[mid]) high = mid-1;
            else low = mid+1;
        }
        else{
            if(target<=v[high] && target>=v[mid])  low = mid+1;
            else high = mid-1;
        }
    }
    return false;
}
int main(){
    vector<int> v = {2,5,6,0,0,1,2};
    int x = 0;  //true
    cout<<search(v,x);

    return 0;

}