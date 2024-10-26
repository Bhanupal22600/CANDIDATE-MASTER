/*
where to use?
array ho [1,n] tak 1 to n pe kuch kaam krna ho like duplicate find krna
T.C=O(n)
S.C=O(1)
kuch aasi condition ho


like eg a={5,1,2,4,3} here array 1 t0 5 given hai and we have to sort it
        a={3,1,2,4,5} swap kr diya 5 ko pakad k eski real posn pr as we now 5 size ka array hai so 5 last index pr hoga
        a={2,1,3,4,5} 3 ko eski real posn pr dal diya
        a={1,2,3,4,5} sim 2 ko

here maxm O(n) hogi time complexity

this is the basic algo fr cyclic sort
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,6,2,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //cycle sort
    int i=0;
    while(i<n){
        int correctIdx=arr[i]-1;
        if(i==corectIdx) i++;
        else swap(arr[i],arr[correctIdx]);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
