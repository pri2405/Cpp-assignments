#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int first = 1;
    int second = 1;
    int curr;
    for(int i = 1; i<=n; i++){
        if(i<=2) cout<<1<<" ";
        else{
            curr = first + second;
            cout<<curr<<" ";
            first = second;
            second = curr;
        }
    }
    return 0;    
}