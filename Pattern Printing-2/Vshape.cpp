#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1;j<2*n;j++){
            if(i==j || (j+i==2*n)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}