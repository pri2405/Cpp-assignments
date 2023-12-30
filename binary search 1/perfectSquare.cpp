#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //binary search
    int i = 0;
    int j = n/2;
    bool flag = false; // not a perfect square
    while(i<=j){
        long long mid = i + (j-i)/2;
        if((long long)mid*mid==n){
            flag = true;  //perfect square
            break;
        }
        else if((long long)mid*mid<n) i = mid + 1;
        else j = mid - 1;
    }
    if(flag==true || n==1){
        cout<<n<<" is a perfect square."<<endl;
    }
    else{
        cout<<n<<" is not a perfect square."<<endl;
    }

    return 0;
}