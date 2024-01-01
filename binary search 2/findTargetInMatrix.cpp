#include<iostream>
using namespace std;
//program to find the target in matrix 
//each row is sorted in increasing order and 1st ele of each row > last ele of previous row
int main(){
    int m, n;
    cout<<"Enter row of the matrix: ";
    cin>>m;
    cout<<"Enter column of the matrix: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter elements of the matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cout<<"Enter target: ";
    cin>>x;

    //find the target
    int si = 0;  //start row idx
    int li = m-1; //last row idx
    bool flag = false;
    while(si<=li){
        int midrow = (si+li)/2;
        if(arr[midrow][0]<=x ){
            //binary search in row
            int sj = 0;  //start column idx
            int lj = n-1;  //last column idx
            while(sj<=lj){
                int midcol = (sj+lj)/2;
                if(arr[midrow][midcol]==x) {
                    flag = true;
                    break;
                }
                else if(arr[midrow][midcol]>x) lj = midcol-1;
                else sj = midcol+1;
            }
            if(flag==true) break;
            si = midrow+1;
        }
        else li = midrow-1;
    }
    if(flag==true)
        cout<<x<<" is present in the matrix"<<endl;
    else 
        cout<<x<<" is not present in the matrix"<<endl;
    
    return 0;
}