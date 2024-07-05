//Write a program to copy the contents of one array into another in the reverse order.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    cout<<"Enter size: ";
    cin>>x;

    for(int i=0;i<x;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    int n=v.size();
    vector<int> r(n);
    for(int i=0;i<=n-1;i++){
        r[i]=v[(n-1)-i];
    }

    for(int j=0;j<n;j++){
        cout<<r[j]<<" ";
    }



}