#include<iostream>
using namespace std;
//return the no. of complete rows of the staircase with n no. of given coins
int main(){
    int n ;
    cout<<"Enter n: ";
    cin>>n;

    //binary search
    int i = 1;
    int j = n;
    int total  = 0;
    while(i<=j){
        int mid = i + (j-i)/2;
        if(mid*(mid+1)<=2*n){
            total = mid;
            i = mid+1;
        }
        else j = mid-1;
    }
    cout<<"Total no. of complete rows of staircase: "<<total<<endl;

    return 0;
}