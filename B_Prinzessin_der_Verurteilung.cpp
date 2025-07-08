#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // n=1;
    set<char> s1;
    for(auto el : v){
        s1.insert(el);
    }
    for(char i='a';i<='z';i++){
        if(s1.find(i)==s1.end()){
            cout<<i<<endl;
            return;
        }
    }
    //n=2;
    set<string> s2;
    for(int i=0;i<n-1;i++){
        string m;
        m+=v[i];
        m+=v[i+1];
        s2.insert(m);
    }
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            string ss;
            ss+=i;
            ss+=j;
            if(s2.find(ss)==s2.end()){
                cout<<ss<<endl;
                return;
            }
        }
    }
    //n=3
    int cn=0;
    set<string> s3;
    for(int i=0;i<n-2;i++){
        string n;
        n+=v[i];
        n+=v[i+1];
        n+=v[i+2];
        s3.insert(n);
    }
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            for(char k='a';k<='z';k++){

            string ss1;
            ss1+=i;
            ss1+=j;
            ss1+=k;
            if(s3.find(ss1)==s3.end()){
                cout<<ss1<<endl;
                return;
            }
        }
        }
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}