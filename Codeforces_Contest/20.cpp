#include<iostream>
using namespace std;
int check(int y,int x){
    int k= x ^ y;
    if(x%k==0 || y%k==0){
        return 1;
    }
    else{
        return 0;
    }
}
void calc(){
    int x,m;
    cin>>x>>m;
    int count=0;
    if(x<m){
    for(int y=1;y<=x+1;y++){
        if(y!=x) count+=check(y,x);
        
    }
    }
    else{
        for(int y=1;y<=m;y++){
        if(y!=x) count+=check(y,x);
        
    }
    }
    cout<<count<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
    calc();
   }
}