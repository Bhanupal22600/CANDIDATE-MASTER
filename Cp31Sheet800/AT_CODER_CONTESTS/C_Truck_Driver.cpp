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
void _print(pair<T, U> p) { cerr << "{"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}"; }
template<typename T>
void _print(vector<T> v) { cerr << "["; for(size_t i = 0; i < v.size(); ++i) { _print(v[i]); if(i + 1 < v.size()) cerr << ", "; } cerr << "]"; }

void calc() {
    int N, A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;

    vector<int> prefA(N+1, 0), prefB(N+1, 0);
    for(int i = 1; i <= N; ++i) {
        prefA[i] = prefA[i-1] + (S[i-1] == 'a');
        prefB[i] = prefB[i-1] + (S[i-1] == 'b');
    }

    long long ans = 0;
    for(int l = 0; l < N; ++l) {
        int needA = prefA[l] + A;
        auto itA = lower_bound(prefA.begin() + (l+1), prefA.end(), needA);
        if(itA == prefA.end()) continue;
        int rA = int(itA - prefA.begin()); // smallest end index (1..N) with >=A a's

        int needB = prefB[l] + B;
        auto itB = lower_bound(prefB.begin() + (l+1), prefB.end(), needB);
        int rB;
        if(itB == prefB.end()) rB = N + 1; else rB = int(itB - prefB.begin()); // first index where b_count >= B

        if(rA < rB) ans += (long long)(rB - rA);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while(t--) calc();
    return 0;
}
