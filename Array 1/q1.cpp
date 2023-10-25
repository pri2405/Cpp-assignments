#include<iostream>
using namespace std;
int main(){
    int sub[50], i;
    for(i=0; i<=48; i++);  // only value of i changed
    {
        sub[i] = i;  // sub[49] = 49  (i=49)
        cout<<sub[i]<<endl;  //49
    }
    return 0;
}