#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s, t;
    cout<<"Enter 1st string: ";
    cin>>s;
    cout<<"Enter 2nd string: ";
    cin>>t;
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s == t) cout<<"Both are anagram to each other.";
    else cout<<"Both are not anagram to each other";

    return 0;
}