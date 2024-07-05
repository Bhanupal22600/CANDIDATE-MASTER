//Given an array of marks of students, if the marks of any student is less than 35 print its roll no.(roll no here refers to the index of the array.)
#include<iostream>
using namespace std;
int main(){
    int arr[5]={90,30,27,45,40};
    for(int i=0;i<=4;i++){
        if(arr[i]<35){
            cout<<i<<endl;

        }
    }

}