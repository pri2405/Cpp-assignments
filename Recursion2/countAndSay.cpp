#include<iostream>
using namespace std;
string countAndSay(int n){
    if(n==1) return "1";
    string ans = "";
    string x = countAndSay(n-1);
    for(int i=0; i<x.size();){
        int count = 1;
        int j = i+1;
        while(j<x.size() && x[i]==x[j]){
            j++;
            count++;
        }
        ans += to_string(count) + x[i];
        i = j;
    }
    return ans;
}
int main(){
    cout<<countAndSay(6);

    return 0;
}