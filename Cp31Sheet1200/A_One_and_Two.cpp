#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    int cn=0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]==2) cn++;
    }
    if(cn%2==1){
        cout<<-1<<endl;
        return;
    }
    else if(cn==0){
        cout<<1<<endl;
        return;
    }
    else{
        int l=0;
        for (int i = 0; i < n; i++){
            if(v[i]==2){
                l++;
            }
            if(l==cn/2){
                cout<<i+1<<endl;
                return ;
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