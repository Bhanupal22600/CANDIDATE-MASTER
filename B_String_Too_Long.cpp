#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<pair<char,int> > v;
    string ans="";
    int l;
    char c;
    for (int i = 0; i < n; i++) {
        cin>>c;
        cin>>l;
        v.push_back({c,l});
    }
    for(auto el : v){
        if(el.second<=100){
            int i=0;
            while(i<el.second){
                if(ans.size()>100){
                    cout<<"Too Long"<<endl;
                    return;
                }
                ans+=el.first;
                i++;
            }
           
        }
        else{
            cout<<"Too Long"<<endl;
            return;
        }
    }
    cout<<ans<<endl;
    return;
}

int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}