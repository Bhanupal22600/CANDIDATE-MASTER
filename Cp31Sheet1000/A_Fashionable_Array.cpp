#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
     int cn2=0;
    int cn1=0;
    if((v[0]+v[n-1])%2==0){
        cout<<0<<endl;
        return;
    }
    else{
        if(v[0]%2!=0){
            for(int i=n-1;i>=0;i--){
                if(v[i]%2==1){
                    break;
                }
                cn1++;
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                if(v[i]%2==0){
                    break;
                }
                cn1++;
                
            }
        }
        if(v[n-1]%2!=0){
            for(int i=0;i<n;i++){
                if(v[i]%2==1){
                    break;
                }
                cn2++;
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(v[i]%2==0){
                    break;
                }
                cn2++;
            }
        }
    }
    cout<<min(cn1,cn2)<<endl;
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