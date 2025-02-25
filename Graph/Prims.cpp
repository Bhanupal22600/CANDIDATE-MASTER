#include<bits/stdc++.h>
#define ll long long int
#define pp pair<int,int>
#include<vector>
#include<list>// double linked list in built
using namespace std;

vector<list<pp> >graph;//global 
int n;// no of vertices
void add_edge(int u,int v, int wt,bool bidir=true){
    graph[u].push_back({v,wt});
    if(bidir){
        graph[v].push_back({u,wt});// bi directional hoga tab
    }
}
ll prims(int src,int n){
    priority_queue<pp,vector<pp>,greater<pp> > pq;// {wt,node}
    unordered_set<int> vis;
    vector<int> par(n+1);
    unordered_map<int,int> mp;
    for(int i=1;i<=n;i++){
        mp[i]=INT_MAX;
    }

    pq.push({0,src});
    mp[src]=0;
    int total_count =0;// 0->n-1
    int result =0;// sum of wts
    while(total_count<n && !pq.empty()){
        pp curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        total_count++;
        result+=curr.first;
        pq.pop();
        for(auto neighbour : graph[curr.second]){
            if(!vis.count(neighbour.first) and mp[neighbour.first]>neighbour.second){
                pq.push({neighbour.second,neighbour.first});
                par[neighbour.first] = curr.second;
                mp[neighbour.first] = neighbour.second;
            }
        }
    }
    return result;

}
int main(){
    cin>>n;
    graph.resize(n+1,list<pp>());
    int m;// edges
    cin>>m;
    while(m--){
        int u,v,wt;// kis kis k beech m edge hai
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;
    cout<<prims(src,n)<<endl;
    return 0;
}
// its a array of linklist where array length is equals no of vertices means every ele of array is rpst as a linklist