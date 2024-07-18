//Given an array of size n+1 consisting of integers from 1 to n.One of the elements is duplicate element.
//Method-2
#include<iostream>
using namespace std;
int main(){
    int arr[8]={6,3,2,4,1,7,1,5};
    int sum=0;
    
    for(int i=0;i<=8-1;i++){
        sum+=arr[i];

    }
    int s=(8-1)*((8-1)+1)/2;
    cout<<sum-s;
}//time efficient 
//space efficient 
//it is best possible code for this question