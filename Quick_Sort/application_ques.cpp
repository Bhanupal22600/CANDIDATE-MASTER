//write a program to find kth smallest element in an array using quicksort.(quick select)
#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement=arr[(si+ei)/2];//optimised line before it is arr[si]
    int count=0;
    for(int i=si;i<=ei;i++){//optimised line
        if(i==(si+ei)/2) continue;//optimised line
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx=count+si;
    // 5 1 8 2 7 6 3 4
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    // 7 1 8 2 5 6 3 4
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){// 7 1 8 2 5 6 3 4
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
    // 4 1 3 2 5 7 8 6


}
int kthSmallest(int arr[],int si,int ei,int k){
    int pi=partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k) return kthSmallest(arr,pi+1,ei,k);
    else return kthSmallest(arr,si,pi-1,k);
    
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4,};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
    cout<<kthSmallest(arr,0,n-1,k);  

}
//avg.case    T.C=O(n) known as quick select


//let's say we have to find 5th samllest element in 5,1,8,2,7,6,3,4,

/*
5,1,8,2,7,6,3,4, here 2 is pivot we get
1,2,8,5,7,6,3,4, we see that k>2 so we search in right side here we do partition such that pivot index lhs,rhs smaller and larger than pivot respectively
1,2,[8,5,7,6,3,4,] now we get 7 is pivot which is at middle index
1,2,[4,5,3,6,7,8,] after partition of 7 pivot 
1,2,[4,5,3,6,],7,8 as k<pivot(ie 7) we search in its L.H.S and now we got pivot as 5
5,1,[4,3,5,6,],7,8, now as k==5 so return
*/


