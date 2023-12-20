#include<iostream>
using namespace std;
int main(){
    int n = 100;
    int k = 5;
    int c = 0;
    for(int i=0; i<n; i++){  // time complexity -> O(n)
        c += i;
    }

    return 0;
}