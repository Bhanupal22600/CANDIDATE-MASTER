//Write a program to input week no(1-7) and print day of week name using switch case.
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    switch(x){// no need of this we can do any code without this.
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default :
        cout<<"Invalid number";       
    }
}