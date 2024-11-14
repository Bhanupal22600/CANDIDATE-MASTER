#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int count=0;
    if((n*2)%10==0){
        cout<<-1<<endl;
        return;
    }
    while(n>1){
        if(n%6==0){
            n=n/6;
        }
        else{
            n=n*2;
        }
        count++;
    }
    if(n==1 || n==3){
        cout<<count<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}