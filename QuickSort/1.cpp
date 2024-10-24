//
#include<iostream>
using namespace std;
int partition(int arr[], int si, int ei){
    int pivotElement = arr[si];
    int count =0;
    for(int i=si;i<=ei;i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[si],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<j){
        if(arr[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;//this break is much important when i=0 ,j=1 and i ,j are adjacent to each other both pointing at the mid adjacent to each other
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    // 5,1,8,2,7,6,3,4
    int pivotIdx=partition(arr,si,end); //
    //4 1 3 2 5 7 8 6
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);

}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);

}
