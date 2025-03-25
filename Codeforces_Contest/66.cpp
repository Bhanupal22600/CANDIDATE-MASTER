#include<iostream>
#include<vector>
using  namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int flag1=0;
    if(v[0]==0 || v[1]==0){
        flag1=1;
    }
    int flag2=0;
    for(int i=2;i<n;i++){
        if(v[i]==0){
            flag2=1;
            break;
        }
    }
    if(!(flag1 || flag2)){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }
    else if(flag1==0 && flag2==1){
        cout<<2<<endl;
        cout<<3<<" "<<n<<endl;
        cout<<1<<" "<<3<<endl;
    }
    else if(flag2==0 && flag1==1){
        cout<<2<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<1<<" "<<n-1<<endl;
        return;
    }
    else{
        cout<<3<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<n-1<<endl;
        cout<<1<<" "<<2<<endl;
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