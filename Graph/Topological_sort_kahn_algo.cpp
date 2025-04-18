#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;// no of vertex
void add_edges(int a, int b, bool bidir= true){
    graph[a].push_back(b);
    if(bidir){
        graph[b].push_back(a);
    }
}

void topoBFS(){
    // kahn algo;
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++){
        for(auto neighbour : graph[i]){
            // i ---> neighbour ki ek edge hai toh neigh++ krdednege
            indegree[neighbour]++;
        }
    }
    queue<int> qu;
    unordered_set<int> vis;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            qu.push(i);
            vis.insert(i);
        }
    }
    while(not qu.empty()){
        int node = qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto neighbour : graph[node]){
            if(not vis.count(neighbour)){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    qu.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }
}

int main(){
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v,list<int> ());
    while(e--){
        int x,y;
        cin>>x>>y;
        add_edges(x,y,false);
    }
    topoBFS();
    return 0;
}