#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);
    v.push_back(1);
    v.push_back(2);
    cout<<"size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    v.pop_back();//vector ka last element gayab ho jayega
    v.pop_back();//last ele remove hoga

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

     cout<<"size is : "<<v.size()<<endl;//now size is reduced by 2 as we remove 2 ele 
    cout<<"Capacity is : "<<v.capacity()<<endl;//but capacity remains same as once capacity is form then it will not change only vector size can be change


}