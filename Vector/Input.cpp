#include<iostream>
#include<vector>
#include <algorithm>//include this for using sort function
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    cout<<v[2]<<endl;
    cout<<v.at(2)<<endl;//it is same as above
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    
    cout<<endl;

}