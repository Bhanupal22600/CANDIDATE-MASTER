//Given an array of marks of students, if the marks of any student is less than 35 print its roll no.(roll no here refers to the index of the array.)
#include<iostream>
using namespace std;
int main(){
    while(1){
        int house[5];
        for(int i=0;i<5;i++){
            cin>>house[i];
        }
    cout<<house[4]<<endl;
    for(int i=0;i<=4;i++){
        if(house[i]>35){
            cout<<i<<endl;
        }
    }
    }
    

}