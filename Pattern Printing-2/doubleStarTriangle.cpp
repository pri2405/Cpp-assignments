#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i =1; i<=2*n; i++){
        if(i==n || i==n+1 ){
            for(int j=1;j<2*n;j++){
                cout<<"*";
            }
        }else if(i<=n){
            for(int k=1;k<=i;k++){
                cout<<"*";
            }
            for(int l=1;l<=2*(n-i)-1;l++){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"*";
            }
        }else{
            for(int k=1;k<=2*n-i+1;k++){
                cout<<"*";
            }
            for(int l=1;l<=2*(i-n)-3;l++){
                cout<<" ";
            }
            for(int k=1;k<=2*n-i+1;k++){
                cout<<"*";
            }
        }cout<<endl;
    }
    return 0;
}
