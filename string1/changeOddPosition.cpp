#include<iostream>
#include<string>
//program to change odd position in the string to character '#'
//(consider 0 based indexing)
using namespace std;
int main(){
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(i%2 != 0){
            s[i] = '#';
        }
    }
    cout<<s;

    return 0;
}