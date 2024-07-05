#include<iostream>
using namespace std;
void display(int a[], int size){//this a also point the same array arr #this "a" is a pointer not an array but we know that through an pointer we can ascess the value also so we get arr all data
    //int size=sizeof(a)/sizeof(a[0]);# this line shows error because as previously mention that a is not an array its a pointer so we cant calc size of array as we do in case of array so we simply pass size while passing array in function itself
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;

}
void change(int b[],int size){//b catch the address of arr 
       b[0]=100;
}
int main(){
    int arr[]={1,4,2,7,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    //accessing the elements of array in another function
    //updation,pass by value/reference?ans:reference
    display(arr,size);//we are sending arr ka address
    change(arr,size);
    display(arr,size);
}
//#  int arr[]={1,4,9,8,4};
// int* ptr=arr;right as in pointer we store address and arr is an address
//int* ptr=&arr;wrong as "arr" itself is an address 
//int* ptr=&arr[0];right 
//int* ptr =arr[0];wrong as we cant store value to pointer














