#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int> maxhp;// maxheap
    priority_queue<int,vector<int>, greater<int> > hp;//minheap
    hp.push(3);
    hp.push(4);
    hp.push(110);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);

    cout<<hp.top()<<"\n";

    return 0;

}