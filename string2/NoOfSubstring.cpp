#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int total = 0;
    int n = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            n++;
        }
        else{
            total += n*(n+1)/2;
            n = 0;
        }
    }
    total += n*(n+1)/2;
    cout<<"Total no. of substrings that contain only vowels: "<<total<<endl;

    return 0;
}