#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        long long int m=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=x){m++;
                ans+=(a[i]-x);}}
        sort(a,a+n);
         for(int i=n-1;i>=0;i--){
            if(a[i]<x){
                if(ans>=(x-a[i])){m++;
                    ans=ans-(x-a[i]);}
                else
                break;}}
        cout<<m<<"\n";}
	return 0;
}