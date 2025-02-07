//Reorder Queue
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& qu){
    int n=qu.size();
    for(int i=1;i<=n;i++){
        int x = qu.front();
        cout<<x<<" ";
        qu.pop();
        qu.push(x);
    }
    cout<<endl;
}
void reorder(queue<int>& q){
    stack<int> st;
    int n= q.size();
    // pop 1st half of the q to the st
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // empty the st into q
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //pop 2nd half (now the first) of the q to the st
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // Most imp step(inter leave one by one)
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // reverse the q using stack
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);

}
