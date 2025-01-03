#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int l;
    cin>>l;
    vector<int> m(l);
    vector<int> s(l);
    for(int i=0;i<l;i++){
        cin>>m[i];
    }
    for(int i=0;i<l;i++){
        cin>>s[i];
    }
    int count=m[l-1];
    for(int i=0;i<l-1;i++){
        if(m[i]>s[i+1]) count+=m[i]-s[i+1];
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}