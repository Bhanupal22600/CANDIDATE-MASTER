#include<iostream>
#include<vector>
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
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto el : graph[i]){// graph[i] khud m linklist hai ek toh hm traverse kr rhe har es list m,similarly for each graph[i]
            cout<<el<<" , ";
        }
        cout<<endl;
    }
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
    display();
    return 0;
}
// its a array of linklist where array length is equals no of vertices means every ele of array is rpst as a linklist