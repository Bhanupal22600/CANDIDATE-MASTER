#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<bool> v(n,false);
    vector<int> b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(!v[a[i]-1]){
            v[a[i]-1]=true;
            b[i]=a[i];
        }
    }
    int pointer=0;
    for(int i=0;i<n;i++){
        
            if(b[i]==0){
                while(v[pointer]){
                    pointer++;
                }
                b[i]=pointer+1;
                v[pointer]=true;
            }
        
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}