#include<iostream>
#include<vector>
using namespace std;
// leetcode-1109
vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int> ans(n,0);
    for(int i=0; i<bookings.size(); i++){
        int fidx = bookings[i][0];
        int sidx = bookings[i][1];
        int value = bookings[i][2];
        ans[fidx-1] += value;
        if(sidx<ans.size())  ans[sidx] += (-value);
    }
    for(int i=1; i<ans.size(); i++){
        ans[i] += ans[i-1];
    }

    return ans;
}
int main(){
    vector<vector<int>> bookings = {{1,2,10}, {2,3,20}, {2,5,25}};
    int n = 5;
    vector<int> ans = corpFlightBookings(bookings,n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}