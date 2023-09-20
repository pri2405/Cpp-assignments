#include<iostream>
using namespace std;

// To check which student scoring the least marks

int main()
{
    int a,b,c;
    cout<<"Enter the marks of student A: ";
    cin>>a;
    cout<<"Enter the marks of student B: ";
    cin>>b;
    cout<<"Enter the marks of student C: ";
    cin>>c;

    if(a==b || b==c || a==c){
         if(a==b ){
            if(c>a){
                cout<<"Both 'A' and 'B' has the least marks."<<endl;
                }else{
                    cout<<"'C' has the least marks."<<endl;
                }
         }else if(b==c ){
             if(a>b){
                cout<<"Both 'B' and 'C' has the least marks."<<endl;
                }else{
                    cout<<"'A' has the least marks."<<endl;
                }
         }else if(a==c){
             if(b>a){
                cout<<"Both 'A' and 'C' has the least marks."<<endl;
                }else{
                    cout<<"'B' has the least marks."<<endl;
                }
         }else if (a==b && b==c){
        cout<<"All have same marks."<<endl;
        }
    }else if(a<b && a<c){
        cout<<"'A' has the least marks."<<endl;
    }else if(b<a && b<c){
        cout<<"'B' has the least marks."<<endl;
    }else{
        cout<<"'C' has the least marks."<<endl;
    }

    return 0;
}