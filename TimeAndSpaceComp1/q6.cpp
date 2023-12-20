#include<iostream>
using namespace std;
int main(){
    int n = 100;
    int c = 0;
    for(int i=0; i<n; i++){  // time complexity -> O(n^2)
        for(int j=0; j<i; j++){
            c++;
        }
    }

    return 0;
}