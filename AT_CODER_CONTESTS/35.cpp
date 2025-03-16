#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,no-stack-protector,fast-math")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
using namespace std;
int f_max(int x,int n,int m){
    while(n>0||m>0){
    if(n>0){
    x/=2;
    n--;
    }else if(m>0){
    x=(x+1)/2;
    m--;
    }
    }
    return x;
}
int f_min(int x,int n,int m){
    while(n>0||m>0){
    if(m>0){
    x=(x+1)/2;
    m--;
    }else if(n>0){
    x/=2;
    n--;
    }
    }
    return x;
}
    
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
cout.setf( ios::fixed);
cout.precision(4);
    int t;
    cin>>t;
    while(t--){
    int x,n,m;
    cin>>x>>n>>m;
    int maxi=f_max(x,n,m);
    int mini=f_min(x,n,m);
    cout<<mini<<" "<<maxi<<"\n";
    }
}
