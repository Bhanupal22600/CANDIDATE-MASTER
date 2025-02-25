#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;//global 
int v;// no of vertices
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);// bi directional hoga tab
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto el : graph[i]){// graph[i] khud m linklist hai ek toh hm traverse kr rhe har es list m,similarly for each graph[i]
            cout<<el<<" , ";
        }
        cout<<endl;
    }
}
bool bfs(int src){
    unordered_set<int> vis;
    queue<int> qu;
    vector<int> par(v,-1);
    qu.push(src);
    vis.insert(src);
    while(not qu.empty()){
        int curr = qu.front();
        qu.pop();
        for(auto neighbour : graph[curr] ){
            if(vis.count(neighbour) and par[curr]!= neighbour) return true;
            if(!vis.count(neighbour)){
                vis.insert(neighbour);
                par[neighbour] = curr;
                qu.push(neighbour);

            }
        }
    }
}
bool has_cycle(){
    unordered_set<int> vis;
    bool result = false;
    for(int i=0;i<v;i++){
        if(!vis.count(i)){
            bool result = bfs(i);
            if(result == true ) return true;
        }
    }
    return false;
}
int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;// edges
    cin>>e;
    while(e--){
        int s,d;// kis kis k beech m edge hai
        cin>>s>>d;
        add_edge(s,d,false);
    }
    //display();
    bool b = has_cycle();
    cout<<b<<"\n";
    return 0;
}
// T.C=O(V+E)