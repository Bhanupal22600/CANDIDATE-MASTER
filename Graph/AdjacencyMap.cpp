#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;

vector<unordered_map<int,int>> graph;//global 
int v;// no of vertices
void add_edge(int src,int dest,int wt,bool bi_dir=true){
    graph[src][dest]=wt;
    if(bi_dir){
        graph[dest][src]=wt;// bi directional hoga tab
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto el : graph[i]){// graph[i] khud m linklist hai ek toh hm traverse kr rhe har es list m,similarly for each graph[i]
            cout<<'('<<el.first<<" "<<el.second<<") , ";
        }
        cout<<endl;
    }

}
int main(){
    cin>>v;
    graph.resize(v,unordered_map<int,int>());
    int e;// edges
    cin>>e;
    while(e--){
        int s,d,wt;// kis kis k beech m edge hai
        cin>>s>>d>>wt;
        add_edge(s,d,wt);

    }
    display();
    return 0;
}