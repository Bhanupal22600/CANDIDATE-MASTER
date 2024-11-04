#include<iostream>
using namespace std;
void calc(){
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    int count=0;
     count+=(n-r)*m;
     count+=(n-r)*(m-1);
     count+=(m-c);
      cout<<count<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}