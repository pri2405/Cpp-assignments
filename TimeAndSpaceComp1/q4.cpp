#include<iostream>
using namespace std;
int main(){
    int n = 100;
    int c = 0;
    for(int i=1; i<n; i*=2){  // time complexity -> O(log n)
        c++;
    }

    return 0;
}