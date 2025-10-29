#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

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
void calc() {
     int64 N, M;
    int64 C;
    if(!(cin >> N >> M >> C)) return ;
    unordered_map<int64,int64> cnt;
    cnt.reserve(N*2);
    for(int i=0;i<N;i++){
        int64 a; cin >> a;
        cnt[a] += 1;
    }
    
    vector<int64> pos;
    pos.reserve(cnt.size());
    for(auto &kv : cnt) pos.push_back(kv.first);
    sort(pos.begin(), pos.end());
    int K = (int)pos.size();
    vector<int64> b(K);
    for(int i=0;i<K;i++) b[i] = cnt[pos[i]];
    vector<int64> g(K);
    for(int i=0;i<K;i++){
        int prev = (i-1+K)%K;
        int64 diff = pos[i] - pos[prev];
        if(i==0) diff = pos[0] - pos[K-1];
        if(diff < 0) diff += M;
        g[i] = ( (pos[i] - pos[prev]) % M + M ) % M;
    }
    vector<int64> pref(2*K+1, 0);
    for(int i=0;i<2*K;i++){
        pref[i+1] = pref[i] + b[i%K];
    }
    vector<int64> S(K, 0);
    int r = 0; 
    r = -1;
    for(int k=0;k<K;k++){
        if(r < k-1) r = k-1;
        while(r+1 < k+K && (pref[r+2] - pref[k]) < C){
            r++;
        }
        int rr = r+1;
        if(rr >= k+K){
            rr = k+K-1;
        }
        int64 sum = pref[rr+1] - pref[k];
        while(rr+1 < k+K && sum < C){
            rr++;
            sum = pref[rr+1] - pref[k];
        }
        S[k] = sum;
        r = rr;
    }
    __int128 ans128 = 0;
    for(int i=0;i<K;i++){
        __int128 contrib = (__int128)g[i] * (__int128)S[i];
        ans128 += contrib;
    }
    long long ans = (long long)ans128;
    cout << ans << "\n";
    return ;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) {
        calc();
    }
    return 0;
}