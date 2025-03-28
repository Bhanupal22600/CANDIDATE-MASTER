#include<bits/stdc++.h>
#define ll long long
using namespace std;
int find(vector<int> &parent,int a){
    return parent[a] = ((parent[a]==a) ? a : find(parent,parent[a]));
}

void Union(vector<int> &parent, vector<int> &rank, int a, int b)
{
    // TX:(log*n);
    a = find(parent, a);
    b = find(parent, b);
    if (a == b)
        return ;
    if (rank[a] >= rank[b])
    {
        rank[a]++;
        parent[b] = a;
    }
    else
    {
        rank[b]++;
        parent[a] = b;
    }
}

struct Edge{
    int src;
    int dest;
    int wt;
};

bool cmp(Edge e1,Edge e2){
    return e1.wt < e2.wt ;
}

ll kruskal (vector<Edge> &input,int n, int e){
    sort(input.begin(),input.end(),cmp);
    vector<int> parent(n+1);
    vector<int> rank(n+1,1);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    int edgeCount =0;//n-1
    int i =0;
    ll ans =0;
    while(edgeCount<n-1 and i<input.size()){
        Edge curr = input[i];// because input is sorted so we will get min wt edge
        int srcpar = find(parent,curr.src);
        int destpar = find(parent,curr.dest);
        if(srcpar!=destpar){
            // include edge as this will not make cycle
            Union(parent,rank,srcpar,destpar);
            ans+= curr.wt;
            edgeCount++;
        }
        i++;//does not matter u picked the last edge or not ,we still need to go to next edge 
    }
    return ans;
}

int main(){
    int n,e;
    cin>>n>>e;
    vector<Edge> v(e);
    for(int i=0;i<e;i++){
        cin>>v[i].src>>v[i].dest>>v[i].wt;
    }
    cout<<kruskal(v,n,e)<<"\n";
    return 0;
}
//KRUSKAL ALGO: t.c=o(V+ElogE)