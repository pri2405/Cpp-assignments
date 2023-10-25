#include<iostream>
using namespace std;
void oddNumbersBtnAandB(int x, int y){
    if(x>y){
        oddNumbersBtnAandB(y,x);
        return ;
    }
    for(int i=x;i<=y;i++){
        if(i%2 != 0) cout<<i<<" ";
    }
    return;
}
int main(){
    int a, b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter last number: ";
    cin>>b;

    cout<<"All odd numbers b/w "<<a<<" and "<<b<<" are: "<<endl;
    oddNumbersBtnAandB(a,b);

    return 0;
}