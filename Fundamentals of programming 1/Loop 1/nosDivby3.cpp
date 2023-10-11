#include<iostream>
using namespace std;
int main(){
    //print all numbers from 1 to 100 that are div by 3

    cout<<"Numbers from 1 to 100 that are divisible by 3"<<endl;
    for(int i=3; i<=100; i+=3){
        cout<<i<<" ";
    }
    return 0;
}