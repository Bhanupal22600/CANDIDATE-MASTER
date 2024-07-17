//Given an array of size n+1 consisting of integers from 1 to n.One of the elements is duplicate element.
//"Method 1"-Brute force means apni sari takat laga do hme fark nhi padta.
//time and space complexity se bas answer correct aana chiye.
#include<iostream>
using namespace std;
int main(){
    int arr[8]={6,3,2,4,1,7,1,5};
    bool flag;
    flag=false;
    for(int i=0;i<8-1;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                flag=true;
                break;
            }
        }
        if(flag==true) break;
    }
    
}
//