#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string of even length: ";
    cin>>s;

    int n = s.length();
    if(n%2 != 0){
        cout<<"Invalid input!!!";
    }
    else{
        reverse(s.begin() + n/2, s.end());
        cout<<s;
    }

    return 0;
}