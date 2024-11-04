//Given an integer array where every element occurs twice except one occurs only once.find that unique element.
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,4,1,3,2,3,5,1,2};
    int n=9;
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];// xor operator is commulative arr ke sab element ka xor lel0
    }
    cout<<res<<"\n";
    return 0;
}
//T.C=O(n)