#include <bits/stdc++.h>
using namespace std;
void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a=1;
    int b=n;
    int i=0;
    int j=n-1;
    int l=-1,r=-1;
    while(i<=j){
        if(v[i]!=a && v[i]!=b && v[j]!=a && v[j]!=b){
            l=i+1;
            r=j+1;
            break;
        }
        else if((v[i]==a && v[j]==b) || (v[i]==b && v[j]==a)){
            a++;
            b--;
            i++;
            j--;
        }
        else if((v[i]==b && v[j]!=a)  ){
            b--;
            i++;
        }
        else if((v[i]==a && v[j]!=b)){
            a++;
            i++;
        }
        else if((v[i]!=b && v[j]==a)  ){
            a++;
            j--;
        }
        else if((v[i]!=a && v[j]==b)){
            b--;
            j--;
        }
    }
    if(l>-1){
        cout<<l<<" "<<r<<endl;
        return;
    }
    else{
        cout<<-1<<endl;
        return;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}