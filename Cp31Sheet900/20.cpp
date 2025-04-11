#include <bits/stdc++.h>
using namespace std;

void calc(){
    string s;
    cin>>s;
    s.back() = s.front();
    cout<<s<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}