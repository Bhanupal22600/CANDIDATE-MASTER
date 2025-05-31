#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<char> v(n);
    set<char> ss;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ss.insert(v[i]);
    }
    string s="";
    for(auto el : ss){
        s+=el;
    }
    int i=0;
    int j=s.size()-1;
    map<char,char> m;
    while(i<=j){
        char c=s[i];
        m[s[i]]=s[j];
        m[s[j]]=c;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<m[v[i]]<<"";
    }
    cout<<endl;
    return;

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}