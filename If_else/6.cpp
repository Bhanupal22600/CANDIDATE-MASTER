//Take input percentage of a student and print the grade according to marks:
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=91){
        cout<<"excellent";   
    }
    else if(n>=71){
        cout<<"good";
    }
    else if(n>=61){
        cout<<"can do better";
    }
    else if(n>=51){
        cout<<"Average";
    }
    else if(n>=41){
        cout<<"Below Average";   
    }
    else{
        cout<<"Fail";
    }
}