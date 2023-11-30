#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    cin>>s;

    int val = 0;
    int x = 1;
    while(s.length()>0){
        val +=x*(s.back() - '0');
        s.pop_back();
        x *= 10;
    }
    cout<<val;
    return 0;
}