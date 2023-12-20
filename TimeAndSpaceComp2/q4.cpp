#include<iostream>
using namespace std;
int main(){
    int c = 0;
    int n = 100;
    for(int i=n; i>0; i/=2){   //Time Complexity -> O(n)
        for(int j=0; j<i; j++){
            c++;
        }
    }
    return 0;
}