#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t="";
    for(int i=0;i<s.size();i++){
        if((s[i]-'A')<=25){
            t+=s[i];
        }
    }
    cout<<t;
    return 0;

}