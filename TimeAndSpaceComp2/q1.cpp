#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i=0; i<n; i++){    // time complexity -> O(n*sqrt(n))
        for(int j=0; j*j<n; j++){
            cout<<"Physics Wallah"<<endl;;
        }
    }

    return 0;
}