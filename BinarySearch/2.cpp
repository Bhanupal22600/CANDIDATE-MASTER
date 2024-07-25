/*Given a sorted array of n elements and a target 'x'.
Find occurence of'x'in the array.If 'x' does not exist return -1.
*/

// jab bhi sorted array ho maxm chance hai ki vo binary search ka ques hai
#include<iostream>
using namespace std;
int main(){
    
    int arr[12]={1,2,2,3,3,3,3,34,4,5,5,9};
    int n=12;
    int x=3;

    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;// ye low + high by 2 hi hai as if low ~ INT_MAX and hi=INT_MAX in that case hi+low can go out of boundation ie INT_MAX so we do this adjustment although this can also be prevented by using long long
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;

    }
    if(flag==false) cout<<arr[hi];// to get upper bound just replace  ths with arr[lo] and arr[mid +1] in if condn

}