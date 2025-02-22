// source node se sare node ka minmdist
#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<climits>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v;
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void bfs(int src,vector<int> &dist){
    queue<int> qu;
    visited.clear();
    dist.resize(v,INT_MAX);
    dist[src]=0;
    visited.insert(src);
    qu.push(src);
    while(not qu.empty()){
        int curr = qu.front();
        cout<<curr<<" ";
        qu.pop();
        for(auto neighbour: graph[curr]){
            if(not visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);// visited mark kr denge
                dist[neighbour] = dist[curr]+1;
            }
        }
    }
}
int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x;
    cin>>x;// source node
    vector<int> dist;
    bfs(x,dist);
    cout<<endl;
    for(int i =0;i<dist.size();i++){
        cout<<dist[i]<<" ";// we are printing in how much distance are all other nodes from src node like 0,1,2 etc can be possible eg
    }
    return 0;
}