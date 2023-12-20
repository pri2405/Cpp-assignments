#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char max = s[0];
    char smax = s[0];
    for(int i=1; i<s.length(); i++){
        if(max<s[i] && smax<s[i] ){
            smax = max;
            max = s[i];
        }
        else if(s[i]>smax && s[i]<max){
            smax = s[i];
        }
    }
    cout<<"2nd largest digit in the string: "<<smax<<endl;

    return 0;
}