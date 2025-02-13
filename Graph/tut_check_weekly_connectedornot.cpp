#include <iostream>
#include <vector>
using namespace std;

const int N = 1e5 + 10;  // Maximum number of nodes
bool vis[N];
vector<int> g[N];

void dfs(int vertex) {
    vis[vertex] = true;
    for (int child : g[vertex]) {
        if (!vis[child]) {
            dfs(child);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    // Convert directed graph into undirected for weak connectivity check
    for (int i = 0; i < e; i++) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);  // Convert directed to undirected
    }

    int ct = 0;  // Count of connected components
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {  // Start DFS if not visited
            dfs(i);
            ct++;
        }
    }

    if (ct > 1) {  // More than one component means not weakly connected
        cout << "false" << endl;
    } else {
        cout << "true" << endl;
    }

    return 0;
}
