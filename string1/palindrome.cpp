#include<iostream>
using namespace std;
bool checkPalindrome(string &str){
    int i = 0;
    int j = str.length() - 1;
    while(i<=j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else return false;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    if(checkPalindrome(s)){
        cout<<"Yes, the given string is palindrome."<<endl;
    }
    else{
        cout<<"No, the given string is not palindrome."<<endl;
    }

    return 0;
}