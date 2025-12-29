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
void calc() {
    int N;
    cin >> N;
    vector<long long> A(N+1), B(N+1), C(N+1);
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= N; i++) cin >> B[i];
    for (int i = 1; i <= N; i++) cin >> C[i];
    vector<long long> preA(N+1), preB(N+1), preC(N+1);
    for (int i = 1; i <= N; i++) {
        preA[i] = preA[i-1] + A[i];
        preB[i] = preB[i-1] + B[i];
        preC[i] = preC[i-1] + C[i];
    }
    long long best = preA[1] - preB[1];
    long long ans = LLONG_MIN;
    for (int y = 2; y <= N-1; y++) {
        ans = max(ans, best + (preB[y] - preC[y]));
        best = max(best, preA[y] - preB[y]);
    }
    ans += preC[N];
    cout << ans <<endl;
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