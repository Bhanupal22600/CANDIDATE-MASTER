#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int a) { cerr << a; }
void _print(long long a) { cerr << a; }
void _print(char a) { cerr << a; }
void _print(string a) { cerr << a; }
void _print(bool a) { cerr << (a ? "true" : "false"); }

template<typename T, typename U>
void _print(pair<T, U> p) {
    cerr << "{";
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << "}";
}

template<typename T>
void _print(vector<T> v) {
    cerr << "[";
    for(size_t i = 0; i < v.size(); ++i) {
        _print(v[i]);
        if(i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}
// Vector of pairs
template<typename T, typename U>
void _print(vector<pair<T, U>> v) {
    cerr << "[";
    for(size_t i = 0; i < v.size(); ++i) {
        _print(v[i]);
        if(i + 1 != v.size()) cerr << ", ";
    }
    cerr << "]";
}

// Map
template<typename K, typename V>
void _print(unordered_map<K, V> m) {
    cerr << "{";
    bool first = true;
    for(auto &p : m) {
        if(!first) cerr << ", ";
        _print(p);
        first = false;
    }
    cerr << "}";
}

bool comp(pair<long long,long long> &p1, pair<long long,long long> &p2) {
    if (p1.second != p2.second) 
        return p1.second > p2.second;  // sort by second descending
    return p1.first < p2.first;        // if equal, sort by first ascending
}
void calc() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(long long i = 0; i < n; ++i) {
        cin >> v[i];
    }
    unordered_map<long long,long long> mp;
    for(auto el : v){
        mp[el]++;
    }
    // vector<pair<long long,long long>> vp;
    // for(auto el : mp){
    //     vp.push_back({el.first,el.second});
    // }
    // sort(vp.begin(), vp.end(), comp);
    long long f=0;
    long long a=0;
    long long b=0;
    for(auto el :mp){
       if(el.first%2){
        m.push_back(el.second);
       }
       else{
        a+=el.second/2;
        b+=el.second/2;
       }
    }
    sort(m.begin(),m.end());
    reverse(m.begin(),m.end());
    for(int i=0;i<m.size();i++){
        if(i%2==0) a+=m[i];
        else b+=m[i];
    }
    cout<<a<<" "<<b<<endl;
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}