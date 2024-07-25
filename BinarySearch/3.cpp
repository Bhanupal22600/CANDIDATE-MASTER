/*Given a sorted array of non-negative destinct integers,
find the smallest missing non-negative element in it.*/
#include<iostream>
using namespace std;
/*int main(){
    int arr[7]={0,1,2,3,5,6,7};
    int n=7;
    for(int i=0;i<n;i++){
        if(i!=arr[i]){
            cout<<i;
            break;
        }
    }
}T.C=O(n)
*/
//Binary search means to reduce the search and time complexity bachane k liye

int main(){
    int arr[9]={0,1,3,4,6,7,8,9,11};
        int n=9;
        int lo=0;// ye same hota hi hmesa
        int hi=n-1;//ye same hota hi hmesa
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==mid) lo=mid+1;
            else{
                ans =mid;
                hi=mid-1;
            }
        }
        cout<<ans;
    
}