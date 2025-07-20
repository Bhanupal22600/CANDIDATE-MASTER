#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int64> X(N);
    for(int i = 0; i < N; i++){
        cin >> X[i];
    }
    if(N == 0){
        cout << 0 << "\n";
        return 0;
    }

    sort(X.begin(), X.end());
    
    int64 total_span = X.back() - X.front();
    if(M >= N){
        
        cout << 0 << "\n";
        return 0;
    }
    vector<int64> gaps;
    gaps.reserve(N-1);
    for(int i = 1; i < N; i++){
        gaps.push_back(X[i] - X[i-1]);
    }
    nth_element(gaps.begin(), gaps.begin() + (M-1), gaps.end(), greater<>());
    int64 remove = 0;
    for(int i = 0; i < M-1; i++){
        remove += gaps[i];
    }

    cout << (total_span - remove) << "\n";
    return 0;
}
