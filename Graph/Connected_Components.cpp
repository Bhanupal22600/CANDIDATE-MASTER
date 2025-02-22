#include<iostream>
#include<vector>
#include<unordered_set>
#include<list>// double linked list in built
using namespace std;

vector<list<int>> graph;//global 
int v;// no of vertices
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);// bi directional hoga tab
    }
}
void dfs(int node,unordered_set<int> &visited){
    visited.insert(node);
    for(auto neighbor: graph[node]){
        if(not visited.count(neighbor)){
            dfs(neighbor,visited);
        } 
    }
}
int connected_components(){
    int result =0;
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        //go to every vertex
        // if from a vertex we can initialise a dfs ,we got one more connected component
        if(visited.count(i)==0){
            result++;
            dfs(i,visited);
        }
    }
    return result;
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
    cout<<connected_components()<<"\n";
    
    return 0;
}
// adj linklist ki copy code hai only change is connected_component() func