#include <iostream>
using namespace std;

// To check if all the three points fall on straight line or not

int main()
{
    float x1, y1, x2, y2, x3, y3;

    cout<<"Enter 1st points (x1, y1)" << endl;
    cin>>x1>>y1;

    cout<<"Enter 2nd points (x2, y2)" << endl;
    cin>>x2>>y2;

    cout<<"Enter 3rd points (x3, y3)" << endl;
    cin>>x3>>y3;

    float slope1 = (y2 - y1)/(x2 - x1);
    float slope2 = (y3 - y2)/(x3 - x2);

    if(slope1 ==slope2){
        cout<<"All 3 points lie on the same line";
    } else {
        cout<<"All 3 points do not lie on the same line";
    }

    return 0;


}