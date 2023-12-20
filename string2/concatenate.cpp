#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    s += rev;
    cout<<s<<endl;

    return 0;
}