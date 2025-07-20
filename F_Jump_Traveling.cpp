#include <bits/stdc++.h>
using namespace std;

static const int MAXN = 200000;
static int visOp[MAXN], answ[MAXN], visVer[MAXN], depthArr[MAXN];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int N, K;
        cin >> N >> K;
        vector<vector<int>> adj(N);
        for(int i = 0, u, v; i < N - 1; i++){
            cin >> u >> v;
            --u; --v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i = 0; i < N; i++){
            visOp[i] = 0;
            answ[i]  = -1;
            visVer[i] = 0;
        }

        int version = 1;
        visOp[0] = 1;
        answ[0]  = 0;

        vector<int> front = {0}, queueBuf;
        int ops = 0;

        while(!front.empty()){
            ops++;
            queueBuf.clear();
            int qh = 0;

            for(int u : front){
                visVer[u] = version;
                depthArr[u] = 0;
                queueBuf.push_back(u);
            }

            while(qh < (int)queueBuf.size()){
                int u = queueBuf[qh++];
                if(depthArr[u] == K) continue;
                for(int v : adj[u]){
                    if(visVer[v] != version){
                        visVer[v] = version;
                        depthArr[v] = depthArr[u] + 1;
                        queueBuf.push_back(v);
                    }
                }
            }

            vector<int> nextFront;
            nextFront.reserve(queueBuf.size() / 2);
            for(int u : queueBuf){
                if(depthArr[u] == K && !visOp[u]){
                    visOp[u] = 1;
                    answ[u]  = ops;
                    nextFront.push_back(u);
                }
            }

            front.swap(nextFront);
            version++;
        }

        for(int u = 1; u < N; u++){
            cout << answ[u] << (u + 1 < N ? ' ' : '\n');
        }
    }
    return 0;
}
