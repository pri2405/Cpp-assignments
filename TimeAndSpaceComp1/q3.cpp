#include<iostream>
using namespace std;
int main(){
    int n = 100;
    int k = 5;
    int c = 0;
    for(int i=0; i<n; i+=k){  // time complexity -> O(n/k) ~ O(n)
        c++;
    }

    return 0;
}