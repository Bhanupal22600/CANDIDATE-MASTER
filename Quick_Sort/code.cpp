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
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    //5,1,8,2,7,6,3,4
    int pi=partition(arr,si,ei);
    // 4 1 3 2 5 7 8 6
    quicksort(arr,si,pi-1);//4 1 3 2
    quicksort(arr,pi+1,ei);//7 8 6
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
//avg.case    T.C=O(n.logn)
//worst case  T.C=O(n^2) this can be reduce if we use pivot index which is at arr[(si+ei)/2] instead of arr[si]
//S.C=O(logn) ye call stack m space le rha hai when we are calling a function
// quick sort is unstable
// internal sort uses variation of quick sort i.e built in sort
//whenever there is no need of stability ,we use quick sort
