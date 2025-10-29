#include <bits/stdc++.h>
using namespace std;
bool should_i_swap(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
        if(a.first>b.first) return true;
        return false;
    }
    else{
        if(a.second>b.second) return true;
        return false;
    }
}
// both this func should_i_swap and cmp are doing same but when passing with built in sort in cmp we do opposite to as in normal bubble sort we do in should_i_swap
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
        if(a.first>b.first) return false;
        return true;
    }
    else{
        if(a.second>b.second) return false;
        return true;
    }
}
// both cmp and should_i_swap giving same result jus tin there bool means is different
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first >> a[i].second ;
    }



    // this is how inbuilt sort look like similar of this should_i_swap func 
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(should_i_swap(a[i],a[j])){
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }


    // here is a cathc as you understand in our should_i_swap above fun but her in cmp fun inbuilt c++ 
    //if you want to swap two values then you should return false instead of true sim for not swap true insted of false
    // in built sort
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    cout<<endl;
    return 0;
}