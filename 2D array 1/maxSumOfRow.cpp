#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows: ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns: ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter elements of array: "<<endl;
    int max_sum = 0;
    int max_idx = 0;
    for(int i=0; i<m; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
        cin>>arr[i][j];
        sum += arr[i][j];
        }
        if(sum>max_sum){
            max_sum = sum;
            max_idx = i;
        }
    }
    cout<<"index of roms having maximum sum("<<max_sum<<"): "<<max_idx;
    return 0;

}