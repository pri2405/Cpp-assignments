#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0; i<=n-1; i++){
        if(i==0 && v[i] != v[i+1]) cout<<v[i]<<endl;
        else if(i==n-1 && v[i] != v[i-1]) cout<<v[i]<<endl;
        else{
            if(v[i] != v[i-1] && v[i] != v[i+1]) cout<<v[i]<<endl;
        }
    }

    return 0;
}