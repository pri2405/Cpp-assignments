#include<iostream>
using namespace std;
int main(){
    // print 26 alphabet with their ASCII values

    int i = 0;
    while(i<26){
        cout<<"ASCII value of "<<char(i + 'A')<<" is "<< int(i + 'A')<<endl;
        i++;
    }

    return 0;
}