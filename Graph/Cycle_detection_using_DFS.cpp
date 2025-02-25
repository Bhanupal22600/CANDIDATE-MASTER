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
bool dfs(int src,int parent, unordered_set<int> &vis){
    vis.insert(src);
    for(auto neighbour : graph[src]){
        if(vis.count(neighbour) and neighbour != parent){
            // cycle detected
            return true;
        }
        if(!vis.count(neighbour)){
            bool res=dfs(neighbour,src,vis);
            if(res == true) return true;
        }
    }
    return false;
}
bool has_cycle(){
    unordered_set<int> vis;
    bool result = false;
    for(int i=0;i<v;i++){
        if(!vis.count(i)){
            result = dfs(i,-1,vis);
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
// its a array of linklist where array length is equals no of vertices means every ele of array is rpst as a linklist