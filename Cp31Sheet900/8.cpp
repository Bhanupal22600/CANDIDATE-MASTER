#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<char> s(n);
    int cn1=0;
    int cn2=0;
    int len=1;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    char prev='>';
    if(s[0]=='>') {
        prev='>';
    }
    else{
        prev='<';
    }
    int mx=0;
    for(int i=1;i<n;i++){
        if(s[i]=='<' && s[i]==prev){
            len++;
        }
        else if(s[i]=='>' && s[i]==prev){
            len++;
        }
        else if(s[i]=='<' && s[i]!=prev){
            prev='<';
            mx=max(mx,len);
            len=1;
        }
        else{
            prev='>';
            mx=max(mx,len);
            len=1;
        }

    }
    mx=max(mx,len);
    cout<<mx+1<<endl;

}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        calc();
    }
    
}