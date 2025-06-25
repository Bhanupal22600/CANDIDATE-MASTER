#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<int> st;
    st.insert(s[0]);
    st.insert(s[n-1]);
    for(int i=1;i<n-1;i++){
        if(st.find(s[i])!=st.end()){
            cout<<"YES"<<endl;
            return;
        }
        else{
            st.insert(s[i]);
        }
    }
    cout<<"No"<<endl;
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