#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int> b;
    vector<int> c;
    int lc=0;
    b.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(b[0]%a[i]!=0){
            c.push_back(a[i]);
            lc=1;
            a.erase(a.begin()+i);
            break;
        }
    }
    if(lc==0){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<n-1;i++){
        if(a[i]%c[0]==0){
            c.push_back(a[i]);

        }
        else{
            b.push_back(a[i]);
        }
    }
    int lb;
    lb=b.size();
    lc=c.size();
    if(lc==0 || lb==0){//not needed
        cout<<-1<<endl;
    }
    else{
        cout<<lb<<" "<<lc<<endl;
        for(int i=0;i<lb;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
         for(int i=0;i<lc;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }



}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}