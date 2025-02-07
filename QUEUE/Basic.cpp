// QUEUE -> FIFO 
// PUSH and POP ARE done in opp direction
#include<iostream>
#include<queue>
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
int main(){
    queue<int> q;
    //push,pop,front,back,size,empty

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<q.front()<<endl;// like top in stack
    cout<<q.size()<<endl;
    q.pop();// 10 remove
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;



    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu.push(60);
    display(qu);

}
/*overflow-only happens if we implement the queue via an array if you fill the array,or when you are out of memory 
whenever the queue is empty & we try to use these functions -pop(),front(),back()*/
