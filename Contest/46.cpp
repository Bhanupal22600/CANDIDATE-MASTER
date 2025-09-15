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
        int n=4;
        // cin >> n;
        vector<int> gas={4, 5, 7, 4};
        // for(int i = 0; i < n; ++i) {
        //     cin >> gas[i];
        // }
        vector<int> cost={6,6,3,5};
        // for(int i = 0; i < n; ++i) {
        //     cin >> cost[i];
        // }
        int k=0;
        int s=0;
        for(int i=n-1;i>=0;i--){
            s+=gas[i]-cost[i];
            if(s>=0) k=i;
        }
        

        debug(k);
        debug(s);
        
    }
    
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t=1;
        // cin >> t;
        while(t--) {
            calc();
        }
        return 0;
    }    
    