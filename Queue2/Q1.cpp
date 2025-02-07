// Reverse first k elements 
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
void reverseK(int k,queue<int>& q){
    stack<int> st;
    for(int i=0;i<=k;i++){
        st.push(q.front());
        q.pop();

    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int n=q.size();
    for(int i=1;i<=n-k;i++){
        q.push(q.front());
        q.pop();
    }

}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    display(q);
    int k=2;
    reverseK(k,q);
    display(q);

}
