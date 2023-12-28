#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
//program to find an integer(k) such that after replacing each & every index of array
// by |ai-k| which gives sorted array, if no integer exists then return -1
float min(float a, float b){
    if(a>b) return b;
    else return a;
}
float max(float a, float b){
    if(a>b) return a;
    else return b;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of the array: "<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    float kmin = (float)INT_MIN;
    float kmax = (float)INT_MAX;
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>=arr[i+1]){
            kmin = max(kmin, (arr[i]+arr[i+1])/2.0);
        }
        else{
            kmax = min(kmax, (arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag == false) cout<<-1;
    else if(kmin == kmax){
        if(kmin-(int)kmin==0) cout<<"There is only one vlue of k: "<<kmin;
        else cout<<-1;
    }
    else{
        if(kmin-(int)kmin>0){
            kmin = (int)kmin + 1;
        }
        cout<<"Range of k is: ["<<kmin<<","<<(int)kmax<<"]";
    }

    return 0;
}
