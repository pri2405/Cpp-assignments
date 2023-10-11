#include<iostream>
using namespace std;
int main(){
    // print all armstrong numbers b/w 1 and 500

    cout<<"Armstrong numbers between 1 and 500"<<endl;
    for(int i=1; i<=500; i++){
        int sum = 0;
        int n = i;
        while(n!=0){
            
            int a = n%10;
            sum += a*a*a;
            n/=10;
        }
        if(i == sum) cout<< i<<endl;
    }

    return 0;
}