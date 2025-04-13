#include<iostream>
#include<vector>
#include<string>
using namespace std;

void calc(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int cn1=0;
    int cn2=0;
    for(int i=0;i<n;i++){
        if(s[i]=="logout") cn1=0;
        else if(s[i]=="private" && cn1==0){
            cn2++;
        }
        else if(s[i]=="login") cn1=1;
    }
    cout<<cn2<<endl;
    return;
}
int main(){
    calc();
}