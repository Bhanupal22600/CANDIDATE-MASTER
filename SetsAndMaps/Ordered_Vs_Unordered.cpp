#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int> s;// increasing order m store krega not like unordered set random
    s.insert(5);
    s.insert(3);
    s.insert(7);
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    map<int,int> m;// key k inc orfder m hoga sort
    m[2]=30;
    m[3]=20;
    m[1]=10;
    for(auto x : m){
        cout<<x.first<<" ";// ket k inc order m
    }
    for(auto x : m){
        cout<<x.second<<" ";// value k order m inc nhi krta it depends on key basis
    }
    


}