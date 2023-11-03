#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i = 1;
    int m1 = INT16_MIN;
    int m2 = INT16_MIN;
    while(i<=3){
        int max = INT_MIN;
        for(int j=0; j<n; j++){
            if(arr[j]>max && m1 != arr[j] && m2 != arr[j]){
                max = arr[j];
            }
        }
        if(i==1) m1 = max;
        if(i==2) m2 = max;
        cout<<max<<" ";
        i++;
        
    }

    return 0;
}