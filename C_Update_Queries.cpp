#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int> u(m);
    for(int i=0;i<m;i++){
        cin>>u[i];
    }
    set<int> v(u.begin(),u.end());
    // sort(v.begin(),v.end());
    vector<char> c(m);
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    sort(c.begin(),c.end());
    int i=0;
    vector<int> q(max(m,n),0);
    for(auto el : v){
        if(q[el-1]==0){
            s[el-1]=c[i];
            q[el-1]++;
        }
        i++;
    }
    cout<<s<<endl;
    return ;
    
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}