#include<iostream>
using namespace std;

int main()
{
    int amount ;
    int x1, x2, x5, x10, x20, x50, x100, x500;
    x1=x2=x5=x10=x20=x50=x100=x500=0;

    cout<<"Enter your amount to find the no. of notes: ";
    cin>>amount;

    switch(amount>=500){
        case 1:
            x500 = amount/500;
            amount -= x500 * 500;
        break;
    }
    switch(amount>=100){
        case 1:
            x100 = amount/100;
            amount -= x100 * 100;
        break;
    }
    switch(amount>=50){
        case 1:
            x50 = amount/50;
            amount -= x50 * 50;
        break;
    }
    switch(amount>=20){
        case 1:
            x20 = amount/20;
            amount -= x20 * 20;
        break;
    }
    switch(amount>=10){
        case 1:
            x10 = amount/10;
            amount -= x10 * 10;
        break;
    }
    switch(amount>=5){
        case 1:
            x5 = amount/5;
            amount -= x5 * 5;
        break;
    }
    switch(amount>=2){
        case 1:
            x2 = amount/2;
            amount -= x2 * 2;
        break;
    }
    switch(amount>=1){
        case 1:
            x1 = amount/1;
            amount -= x1 * 1;
        break;
    }

    if(x500>0){
        cout<<"No. of notes of 500: "<<x500<<endl;
    }
    if(x100>0){
        cout<<"No. of notes of 100: "<<x100<<endl;
    }
    if(x50>0){
        cout<<"No. of notes of 50: "<<x50<<endl;
    }
    if(x20>0){
        cout<<"No. of notes of 20: "<<x20<<endl;
    }
    if(x10>0){
        cout<<"No. of notes of 10: "<<x10<<endl;
    }
    if(x5>0){
        cout<<"No. of coins of 5: "<<x5<<endl;
    }
    if(x2>0){
        cout<<"No. of coins of 2: "<<x2<<endl;
    }
    if(x1>0){
        cout<<"No. of coins of 1: "<<x1<<endl;
    }

    return 0;

}