#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<char> vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    vector<char> ut = vt;           
    reverse(ut.begin(), ut.end());  

    vector<char> v=vt;
    vector<char> u=ut;
    int ans=0;
    int pt1=0;
    int pt2=0;
   while (pt1 < n && pt2 < n && v[pt1] == u[pt2]) {
    pt1++;
    pt2++;
}
    int i=pt1;
    int j=pt2;
    if(i==n && j==n){
        cout<<0<<endl;
        return;
    }
    int cn=0;
    int flag=0;
    int flag2=0;
    if(v[i]!=u[j]){
        //case 1 take 1st char;
        char ch=v[i];
        while(i!=n && j!=n){
            if(v[i]=='0' ){
                i++;
            }
            else if(u[j]=='0') j++;
            else if(v[i]!=u[j]){
                if(v[i]==ch){
                    v[i]='0';
                    u[n-1-i]='0';
                    i++;
                    cn++;
                }
                else if(u[j]==ch){
                    u[j]='0';
                    v[n-1-j]='0';
                    j++;
                    cn++;
                }
                else {
                    flag=-1;
                    break;
                }
            }
            else{
                i++;
                j++;
            }
        }

        i=pt1;
        j=pt2;
        v=vt;
        u=ut;
        //case 2 take 2nd char;
        char bh=u[j];
        while(i!=n && j!=n){
            if(v[i]=='0'){
                i++;
            }
            else if(u[j]=='0') j++;
            else if(v[i]!=u[j]){
                if(v[i]==bh){
                    v[i]='0';
                    u[n-1-i]='0';
                    i++;
                    ans++;
                }
                else if(u[j]==bh){
                    u[j]='0';
                    v[n-1-j]='0';
                    j++;
                    ans++;
                }
                else {
                    flag2=-1;
                    break;
                }
            }
            else{
                i++;
                j++;
            }
        }
        
    }
    if(flag==-1 && flag2==-1){
        cout<<-1<<endl;
    }
    else if(flag==-1){
        cout<<ans<<endl;
    }
    else if(flag2==-1){
        cout<<cn<<endl;
    }
    else{
        cout<<min(cn,ans)<<endl;
    }
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