#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    int Esum = 0;
    int Osum = 0;
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i%2 == 0) Esum += arr[i];
        else Osum += arr[i];
    }
    cout<<"Sum of elements at even indices: "<<Esum<<endl;
    cout<<"Sum of elements at odd indices: "<<Osum<<endl;

    cout<<"Difference b/w sum of elements at even indices to odd indices = "<<Esum-Osum;

    return 0;
}