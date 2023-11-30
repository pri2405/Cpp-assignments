#include<iostream>
using namespace std;
//program to change matrix if an element is 0, set its entire row and column to 0's
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    

    int a[n][n];
    int x = 1;
    int i = 0;
    
    while(x<=n*n){
        int j = i;
        while(j<n-i){       // left to right
            a[i][j++] = x++;
        }
        j = i + 1;
        while(j<n-i){        // top to bottom
            a[j++][n-i-1] = x++;
        }
        j = n - i - 2;
        while(j>i){          // right to left
            a[n-i-1][j--] = x++;
        }
        j = n - i - 1;
        while(j>i){          // bottom to top
            a[j--][i] = x++;
        }
         i++;
    }
    //print
    for(int p=0; p<n; p++){
        for(int q=0; q<n; q++){
            cout<<a[p][q]<<" ";
        }cout<<endl;
    }

    return 0;
}