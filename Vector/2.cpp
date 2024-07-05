//Find the last occurence of x in the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> v;
 v.push_back(9);
 v.push_back(4);
 v.push_back(6);
 v.push_back(7);
 v.push_back(2);
 v.push_back(1);
 int x=6;
 int idx=-1;
 for(int i=v.size()-1;i>=0;i--)
 if(v[i]==x){
    idx=i;
    break;
 }

cout<<idx;
}