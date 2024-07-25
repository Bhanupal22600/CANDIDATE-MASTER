//Given a sorted integer array and an integer
//'x',find the lower bound of x. (means x se just chota no)
#include<iostream>
using namespace std;
/*int main(){
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=6;
    for(int i=n-1;i>0;i--){
        if(arr[i]<x){
        cout<<arr[i];
        break;
        }
        
    }
}
//this is linear search T.C=O(n)

*/
int main(){
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=8;

    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;// ye low + high by 2 hi hai as if low ~ INT_MAX and hi=INT_MAX in that case hi+low can go out of boundation ie INT_MAX so we do this adjustment although this can also be prevented by using long long
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;

    }
    if(flag==false) cout<<arr[hi];// to get upper bound just replace  ths with arr[lo] and arr[mid +1] in if condn
}
//VIA Binary search O(logn)