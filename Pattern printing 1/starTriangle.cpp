#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i =1; i<2*n; i++){
        if(i<=n){
            for(int j =1; j<=i;j++ ){
                cout<<"*";
            }
        }else{
            for(int k = i; k<2*n; k++){
                cout<<"*";
            }
        }cout<<endl;
    }
    return 0;
}