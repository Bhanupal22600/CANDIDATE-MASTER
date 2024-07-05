#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int> a){
    a[0] = 100;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
 
void change1(vector<int> &a){//now a will point the same vector by reference
    a[0] = 100;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
} 

int main(){
vector<int> v;
v.push_back(9);
v.push_back(10);
v.push_back(6);
v.push_back(1);
for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
}

cout<<endl;
change(v);// as vector is passed by valur so each time you passed new vector is created
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";//as v remains same means vectors are passed by value

}

cout<<endl;
change1(v);// as vector is passed by valur so each time you passed new vector is created
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

}

}