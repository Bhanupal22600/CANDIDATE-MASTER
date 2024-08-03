#include<iostream>
using namespace std;
int main(){
    int y;
    cin>>y;
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                cout<<"366";
            }
            else{
                cout<<"365";
            }
        }
        else{
            cout<<"366";
        }
    }
    else{
        cout<<"365";
    }
}