#include<iostream>
using namespace std;
void squareOfFirstnNumbers(int x){
    for(int i=1;i<=x;i++){
        int sq = i*i;
        cout<<"Square of "<<i<<" = "<<sq<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    squareOfFirstnNumbers(n);

    return 0;
}