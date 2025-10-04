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
int main() {
    int n,delay,forget;
    cin>>n>>delay>>forget;
        const long long mod = 1e9 + 7;
        long long cn = 0;
        cn++;
        queue<long long> q;
        q.push(1);
        int flag = 0;
        for (int i = 2; i <= n; i++) {
            debug(cn);
            cout<<endl;
            if (i > forget && flag == 0) {
                flag = 1;
            }
            if (flag == 0) {
                if (i <= delay) {
                    continue;
                } else {
                    q.push(cn);
                    cn = (cn * 2) % mod;  // apply modulo in multiplication
                }
            } else {
                cn = (cn - q.front() + mod) % mod; // handle negative safely
                q.pop();
                q.push(cn);
                cn = (cn * 2) % mod;  // apply modulo here too

                
            }
        }
        cout << (int)(cn % mod);
}