//print all increasing sequence of length k from first n natural no.
#include<iostream>
#include<vector>
using namespace std;
void printSubset(int arr[],int n, int idx, vector<int> ans, int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size(); i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-idx)< k) return;//Time Complexity better ho jayegi
    printSubset(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans,k);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k=3;
    printSubset(arr,n,0,v,k);

}
/*arr[5]={1,2,3,4,5}

Subsequence means (eg. k=3 length ka subsequence chiye) -  123 , 124 , 125 , 134 , 135 , 145 ,234 , 235 ,245 ,345 (# ek bar jo element le liya uske aage hi lenge ab eg 153 is wrong)
Subset-2^n(non repeating)
Subarray- continuous part of array


*/