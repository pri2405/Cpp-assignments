#include<iostream>
using namespace std;
float areaOfCircle(int r){
    float area = 3.14*r*r;
    return area;
}
int main(){
    int r;
    cout<<"Enter radius of a circle: ";
    cin>>r;

    cout<<"Area of a circle = "<<areaOfCircle(r);

    return 0;
}