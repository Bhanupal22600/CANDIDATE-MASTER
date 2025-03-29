#include<iostream>
#include<vector>
using namespace std;

void calc(){
    int n;
    cin>>n;
    vector<char> v(n);
    vector<char> u(n);
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]=='1'){
            c1++;
        }
    }
    for(int i=0;i<n;i++){
        cin>>u[i];
        if(u[i]=='0'){
            c2++;
        }
    }
    if(c1>c2) {
        cout<<"NO"<<endl;
        return;
    }
    
    else {
        int o1=0;
        int e1=0;
        for(int i=0;i<n;i++){
            if(v[i]=='1'){
                if((i+1)%2==0){
                    e1++;
                }
                else o1++;
            }
        }
        int o0=0;
        int e0=0;
        for(int i=0;i<n;i++){
            if(u[i]=='0'){
                if((i+1)%2==0){
                    e0++;
                }
                else o0++;
            }
        }
        if(o1<=e0 && e1<=o0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return;


    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}