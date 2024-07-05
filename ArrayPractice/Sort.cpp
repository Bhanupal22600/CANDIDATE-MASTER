//sort the array of 0's and 1's
#include<iostream>
#include<vector>
using namespace std;
void sort1(vector<int>& v){
    int n=v.size();
    int count_zeros=0;
    int count_ones=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) count_zeros++;
        else count_ones++;
    }
    //filling elements
    for(int i=0;i<n;i++){
        if(i<count_zeros) v[i]=0;
        else v[i]=1;
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    for(int i=0 ;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort1(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
//here time complexity is 2n as we have used two loops in sort 1 func