// Maximum sum Subarray of size k
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxsum=INT_MIN;
    int maxidx=-1;
    for(int i=0;i<=n-k;i++){// tot no ops =n-k+1
        int sum=0;
        for(int j=i;j<i+k;j++){// k times 
            sum+=arr[j];
        }
        if(maxsum<sum){
            maxsum=sum;
            maxidx=i;
        }
    }
    // tno=(n-k+1)*k
    // time complexity=O(k*n)=O(n^2); bad
    cout<<maxsum<<endl;
    cout<<maxidx;
}
/*{7,1,2,5,8,4,9,3,6}
A subarray is any length of arr from its parents such that arr[1] should be after arr[0] and so arr[2] should be after arr[1] and so on while selecting look eg. below
{7,1,2},{1,2,5},{2,5,8},{5,8,4},{8,4,9}.{4,9,3},{9,3,6} these are the only possible subarray for k=3




*/