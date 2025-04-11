#include<iostream>
#include<vector>
#include<string>
using namespace std;

void calc(){
    string s,t;
    cin>>s>>t;

    vector<int> v(26,0);
    int m=t.size();
    int i=0;
    while(i<m){
        v[t[i]-'A']++;
        i++;
    }
    int n=s.size();
    for(int j=n-1;j>=0;j--) {
        if(v[s[j]-'A']>0){   
            v[s[j]-'A']--;
        }
        else{
            s[j]='.';
        }
    }
    string st = "";
    for(int j=0 ; j<n ; j++){
        if(s[j]!='.') st+=s[j];
    }
    if(st==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}