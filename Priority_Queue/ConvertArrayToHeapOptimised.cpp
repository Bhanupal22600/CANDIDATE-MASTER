// Given an array ,conbvert that array to a heap.
// every sorted array will be a heap but not every heap is a sorted array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class MaxHeap{
    vector<int> hp;
    int i ;// 0 to i everything is max heap
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
    MaxHeap(vector<int> v ){
        /*Time:O(n)  -- imp line */
        hp = v;
        int n = hp.size();
        for(int i = n/2;i>=0;i--){
            downheapify(i);
        }
    }
};
int main(){
    vector<int> v ={9,6,1,19,3,2,8,12,5};
    MaxHeap hp(v);
    hp.display();
    hp.push(100);
    hp.display();
    return 0;
}
 /*Time:O(n)  -- imp line */
 /* derive this T.C through geometric proression ask in interview*/
