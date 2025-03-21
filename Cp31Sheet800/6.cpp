#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;                               
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a;
    int b;
    a=v[0];
    int flag=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=a) flag=1; 
    }
    if(!flag){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=1;i<v.size();i++){
        if(v[i]!=a){
            b=v[i];
            break;
        } 
    }
    int cn1=0;
    int cn2=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==a) cn1++;
        else if(v[i]==b) cn2++;
        if(!(v[i]==a || v[i]==b)){
            cout<<"NO"<<endl;
            return;
        }  
    }
    if(abs(cn1-cn2)>1) {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}