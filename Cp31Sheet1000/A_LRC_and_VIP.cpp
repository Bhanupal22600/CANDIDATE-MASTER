#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    
    vector<int> arr;
    int f;
    int a=0;
    int b=0;
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        f=v[0];
        if(i!=0 && f!=v[i]){
            flag=1;
        }
        if(v[i]%2==0){
            a=1;
            arr.push_back(1);
        }
        else{
            b=1;
            arr.push_back(2);
        }
    }
    vector<int> u = v;
    if(a==1 && b==1){
        cout<<"YES"<<endl;
        for(auto el : arr){
            cout<<el<<" ";
        }
        cout<<endl;
        return;   
    }
    else{
        if(flag){
           sort(u.begin(),u.end());
           int larg = u[n-1];
           int idx=0;
           for(int i=0;i<n;i++){
            if(v[i]==larg){
                idx=i;
                break;
            }
           }
           for(int i=0;i<n;i++){
            if(i!=idx){
                cout<<1<<" ";
            }
            else{
                cout<<2<<" ";
            }
           }
           cout<<endl;
           return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
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