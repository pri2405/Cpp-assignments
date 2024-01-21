#include<iostream>
#include<vector>
using namespace std;
void printIncSequence(int idx, int n, int k, vector<int> &ans){
    if(idx==k){
        for(int i=0; i<k; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=idx+1; i<=n; ++i){
        ans.push_back(i);
        printIncSequence(i,n,k,ans);
        ans.pop_back();
    }
}
int main(){
    int n, k;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter length: ";
    cin>>k;

    vector<int> ans;
    printIncSequence(0,100,50,ans);

    return 0;
}