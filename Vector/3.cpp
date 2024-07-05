//Find the doublet indices in the array whose sum is equal to the given value x.print their indexices(leetcode ques-1 two sum)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter target: ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"enter vector size: ";
    cin>>n;

    cout<<"Enter the elements: ";
    
    for(int i=0;i<n;i++){
        int q;//as every time q is alloted a new address when one iteration is complete but that adress name is q so this means q is created in new place each time with same variable name q but different address
//Declaration: Each time the loop starts a new iteration, the statement int q; declares a new variable q. 
//This variable q is local to the iteration and does not carry over to the next iteration.
 //Scope: The scope of q is within the current iteration of the loop. After the iteration ends, q is destroyed, and a new q is created in the next iteration.
        cin>>q;
        v.push_back(q);
    }

    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i <<","<< j<<")"<<endl;
            }
        }
    }

}