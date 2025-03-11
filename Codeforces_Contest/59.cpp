#include<iostream>
using namespace std;
void calc(){
    int n,k,p;
    cin>>n>>k>>p;
    if(k>n*p || k<(-n)*p){
        cout<<-1<<endl;
        return;
    }
    if(k==0){
        cout<<0<<endl;
        return;
    }
    if(k>0){
        cout<<(k+p-1)/p<<endl;
        return;
    }
    else{
        cout<<(-k+p-1)/p<<endl;
        return;
    }
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    calc();
  }  
} 
