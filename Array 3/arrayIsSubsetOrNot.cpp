#include<iostream>
using namespace std;
bool arrIsSubset(int v1[], int v2[], int m, int n){
    int i = 0;
    int j = 0;
    for(i=0; i<n; i++){ //arr2
        for(j=0; j<m; j++){ //arr1
            if(v2[i] == v1[j]) break;
        }
        if(j==m) return 0;
    }
    return 1;
}
int main(){
    int arr1[] = {1,5,7,3,10,8,9};
    int arr2[] = {3,9,7};

    int m = 7;  //arr1
    int n = 3;  // arr2

    if(arrIsSubset(arr1, arr2, m, n))
        cout<<"arr2 is subset of arr1."<<endl;
    else 
        cout<<"arr2 is not a subset of arr1."<<endl;

    return 0;

}