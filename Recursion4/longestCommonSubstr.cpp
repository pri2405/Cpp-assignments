#include<iostream>
using namespace std;
int longestCommonsubstr(string s, string t, int m, int n, int cnt){
    if(m==0 || n==0)  return cnt;
    if(s[m-1]==t[n-1]) return  longestCommonsubstr(s,t,m-1,n-1,cnt+1);
    int c = max(longestCommonsubstr(s,t,m-1,n,0), longestCommonsubstr(s,t,m,n-1,0));
    return max(cnt, c);
}
int main(){
    string s = "study";
    string t = "stunt";

    cout<<"Length of longest common substring ";
    cout<<longestCommonsubstr(s,t,s.length(),t.length(),0);

    return 0;
}