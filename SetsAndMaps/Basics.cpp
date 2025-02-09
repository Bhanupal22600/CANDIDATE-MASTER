#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    // ye saab random order m insert ho rhe hai
    // toh ab enhe print kase kre use for each ele loop

    for(int ele: s ){
        cout<<ele<<" ";
    }
    cout<<endl;
    s.insert(4);// set sirf unique value ko hi store krta hai
    for(int ele: s ){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;// not 7 its 6


    // s.find()
    int target = 2;
    // s.find() do kaam krta hai it searches in the set,and if it is not found then it returns the last element
    if(s.find(target)!=s.end()){//es line ka mtlb hai target exist, if we use == then target not exist read above line
        cout<<"exist"<<endl;
    }
    else{
        cout<<"does not exist"<<endl;
    }

    //s.erase()
    s.erase(6);
    for(int ele: s ){
        cout<<ele<<" ";
    }

}
/*
s.erase()=O(1)
s.find()=O(1)// v.imp
s.insert()=O(1)


*/