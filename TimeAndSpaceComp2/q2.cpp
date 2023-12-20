#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int c = 0;
    for(int i=0; i<n; i++){    // time complexity -> O(n*log n)
        for(int j=1; j<n; j*=2){
            c++;
        }
    }

    return 0;
}