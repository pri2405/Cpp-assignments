#include<iostream>
using namespace std;
int main(){
    int c = 0;
    int n = 100;
    for(int i=1; i<n; i*=2){   //Time Complexity -> O(n*log(n))
        for(int j=n; j>i; j--){
            c++;
        }
    }
    return 0;
}