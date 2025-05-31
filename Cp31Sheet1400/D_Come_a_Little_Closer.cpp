// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<ll> vl;
// #define rep(i,a,b) for(ll i=(a);i<(b);i++)
// #define rrep(i,a,b) for(ll i=(b)-1;i>=(a);i--)
// #define all(a) begin(a),end(a)
// template<class T>bool chmin(T&a,T b){if(b<a){a=b;return 1;}return 0;}

// int main(){
//     cin.tie(0)->sync_with_stdio(0);
//     int _=1;cin>>_;
//     while(_--){
//       ll N;cin>>N;
//       vl X(N),Y(N);
//       rep(i,0,N)cin>>X[i]>>Y[i];if(N==1){cout<<1<<endl;continue;}
//       vl cand={max_element(all(X))-X.begin(),min_element(all(X))-X.begin(),max_element(all(Y))-Y.begin(),min_element(all(Y))-Y.begin()};
//       ll ans=1e18;
//       for(auto i:cand){
//         vl S,T;
//         rep(j,0,N)if(j!=i)S.emplace_back(X[j]),T.emplace_back(Y[j]);
//         sort(all(S));
//         sort(all(T));
//         ll area=(S.back()-S[0]+1)*(T.back()-T[0]+1);
//         if(area==N-1)chmin(ans,area+min(S.back()-S[0]+1,T.back()-T[0]+1));
//         else chmin(ans,area);
//       }
//       cout<<ans<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int N;
        cin >> N;

        vector<long long> X(N), Y(N);

        // Reading input points
        for (int i = 0; i < N; i++) {
            cin >> X[i] >> Y[i];
        }

        // Special case when there's only one point
        if (N == 1) {
            cout << 1 << endl;
            continue;
        }

        // Find indices of points with extreme coordinates
        vector<int> candidates;
        auto maxX = max_element(X.begin(), X.end()) - X.begin();
        auto minX = min_element(X.begin(), X.end()) - X.begin();
        auto maxY = max_element(Y.begin(), Y.end()) - Y.begin();
        auto minY = min_element(Y.begin(), Y.end()) - Y.begin();

        candidates.push_back(maxX);
        candidates.push_back(minX);
        candidates.push_back(maxY);
        candidates.push_back(minY);

        long long bestAnswer = 1e18;

        for (int i : candidates) {
            // Exclude the i-th point
            vector<long long> xPoints, yPoints;
            for (int j = 0; j < N; j++) {
                if (j == i) continue;
                xPoints.push_back(X[j]);
                yPoints.push_back(Y[j]);
            }

            sort(xPoints.begin(), xPoints.end());
            sort(yPoints.begin(), yPoints.end());

            long long width = xPoints.back() - xPoints.front() + 1;
            long long height = yPoints.back() - yPoints.front() + 1;
            long long area = width * height;

            // If we have exactly N-1 points tightly packed in a rectangle
            if (area == N - 1) {
                long long extra = min(width, height);
                bestAnswer = min(bestAnswer, area + extra);
            } else {
                bestAnswer = min(bestAnswer, area);
            }
        }

        cout << bestAnswer << endl;
    }

    return 0;
}
