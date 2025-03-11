#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class MaxHeap{
    vector<int> hp;
    void upheapify(int ci){// ci = child index
        while(ci>0){
            int pi = (ci-1)/2;// pi = parent index
            if(this->hp[pi]<this->hp[ci]){
                swap(hp[pi],hp[ci]);
                ci = pi;
            }
            else{
                break;
            }
        }
    }
    void downheapify(int idx){
        while(idx<hp.size()){
            int lc = 2*idx+1;
            int rc = 2*idx+2;
            if(lc>=hp.size()) break;// idx->leaf
            int maxEL= idx;
            if(hp[lc]>hp[maxEL]){
                maxEL = lc;
            }
            if(rc<hp.size() and hp[rc] > hp[maxEL]){
                maxEL = rc;
            }
            if(maxEL != idx){
                swap(hp[idx],hp[maxEL]);
                idx = maxEL;// for next iteration
            }
            else{
                break;
            }
        }

    }
public:
    void push(int element){
        hp.push_back(element);
        upheapify(hp.size()-1);
    }
    // T.C = O(logn) for this push func
    void pop(){
        //removes the highest priority element
        if(empty()) return ;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        if(!empty())
            downheapify(0);
    }
    // T.C = O(logn) for this pop func
    int peek(){
        if(empty()) return INT_MIN;
        return hp[0];
    }
    // T.C = O(1)

    bool empty(){
        return hp.size()==0;
    }
    void display(){
        cout<<"[";
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]\n";
    }
};
int main(){
    MaxHeap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    hp.pop();
    hp.display();
    hp.pop();
    hp.display();

    return 0;
}
// heap means parent node child node 
// it a complete bianry tree
// if parent node is at x then child node is at x*2+1 , x*2+2
// if child is at node x then parent is at floor[(x-1)/2]