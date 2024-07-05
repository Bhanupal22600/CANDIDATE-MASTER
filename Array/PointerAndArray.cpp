#include<iostream>
using namespace std;
void sum(int* a,int size){ // as we are passing address of array so we can also store this in a pointer 
       int s=0;
        for(int i=0;i<=size-1;i++){
         s+=a[i];
    }
    cout<<endl<<s;
}
int main(){
    int arr[]={4,2,6,1,7};
    int* ptr =arr;// or &arr[0] give whole array adress
    cout<<ptr<<endl;
    ptr[0]=5;// or *ptr=8 we can also do as its a pointer
    for(int i=0;i<=4;i++){
         cout<<ptr[i]<<" ";//see we can acess the whole arr through pointer
    }
    cout<<endl;
    // this can also be done by
    for(int i=0;i<=4;i++){
         cout<<*ptr<<" ";
         ptr++;//now pointer point address of 2nd value of array
    }
    cout<<endl;
    ptr=arr;//as after ending of above for loop ptr is pointing last element of the array so to get back we initialize again to point whole array
    *ptr=8;
    ptr++;
    *ptr=9;
    ptr--;//to get back point to the arr
    for(int i=0;i<=4;i++){
         cout<<*ptr<<" ";
         ptr++;//now pointer point address of 2nd value of array
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    sum(arr,size);
}
//bas ye yaad rakho hm jab bhi address pass krte hai hm address pass krte hai