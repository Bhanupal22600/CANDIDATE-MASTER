//Write a program to reverse the array without using any extra array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    cout<<"size: ";
    cin>>x;

    cout<<"give vector ele: ";
    for(int i=0;i<x;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

int i=0;
int j=v.size()-1;
while(i<=j){
    //swap v[i] and v[j]
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;

}

for(int k=0;k<v.size();k++){
    cout<<v[k]<<" ";

}

}