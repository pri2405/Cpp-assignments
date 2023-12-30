#include<iostream>
#include<vector>
using namespace std;
//given a binary matrix where each row is sorted in inc. order
// return the row with the maximum no. of 1's
int firstOccurrence(vector<int> &arr){  // find first occurrence of 1
    int i = 0;
    int j = arr.size()-1;
    int ans  = arr.size();
    while(i<=j){
        int mid  = i + (j-i)/2;
        if(arr[mid]==1){
            ans = mid;
            j = mid-1;
        }
        else i = mid+1;
    }
    return ans;
}
int rowWithMaxNoOf1(vector<vector<int>> &a){
    int i = 0;
    int mn = a.size(); 
    int idx = -1;
    while(i < a.size()){
        int no = firstOccurrence(a[i]); //store 1st ocurrence of 1
        if(no<mn){  // row having 1st occurrence of '1' at min index means maximum no. of 1
            mn = no;
            idx = i;
        }
        i++;
    }
    return idx+1;  // return row number
}
int main(){
    vector<vector<int>> v = {{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    cout<<"Given matrix: "<<endl;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    cout<<rowWithMaxNoOf1(v);  // return 2

    return 0;
}