#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,5};
    cout<<&arr[0]<<endl;// you will see difference of 4 in every next element
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr;//this is address of whole array which is same as the address of its 1sr element as one element contains 4 byte and its 1 byte address is known as its address 
}