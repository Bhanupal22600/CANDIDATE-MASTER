#include <bits/stdc++.h>
using namespace std;

// this cmp sort is easy it just sort the array based on 
/*
this is basic func :


bool cmp(vector<int> &a,vector<int> &b){
    return a[1]>b[1];
}
    it is easy
    here it just sort the vector where each el is a pair like vector<pair<int,int>> and so 
    here it just sort based on 2nd index of each pair(which is a el of a vector) in descending order means
    which pair has more 2nd value is before than which has low 2nd value
    */
// similarly here r1 we calc and r2 we calc both are here float as in knapsack we can
// also take a fraction of any el and return condn is like above simple func 
// here it just sort arr based on second value which give more profit is first means is 
//descending order high to low.
bool cmp(pair<int, int> &p1, pair<int, int> &p2) {
    // pair<int, int> first -> value, second -> weight
    double r1 = (p1.first*1.0) / (p1.second*1.0);
    double r2 = (p2.first*1.0) / (p2.second*1.0);
    return r1 > r2;
}
// take this hardcode eg it do like (60,10){first as it has 6 per wt} then (100,20) then (30,120)
double fractionalKnapsack(vector<int> &profit, vector<int> &weights, int n, int W) {
    /**
     * Time: O(nlogn)
     * Space: (sorting algo)
    */
    vector<pair<int, int> > arr;
    for(int i = 0; i < n; i++) {
        arr.push_back({profit[i], weights[i]});
    }
    sort(arr.begin(), arr.end(), cmp);
    double result = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i].second <= W) {
            result += arr[i].first;
            W -= arr[i].second;
        } else {
            result += ((arr[i].first*1.0) / (arr[i].second*1.0))*W;
            W = 0;
            break;
        }
    }
    return result;
}

int main() {
    vector<int> profit = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int W = 50;
    int n = 3;
    cout<<fractionalKnapsack(profit, weights, n, W)<<"\n";
    return 0;
}