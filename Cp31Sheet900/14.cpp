#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long min=0;
        long long mx=0;

        long long c=n;

        //minm
        if(c%6==0){
            min=c/6;
        }
        else if(c%6==2 && c>6){
            min=c/6+1;
        }
        else if(c%6==4 && c>6  ){
            min=c/6+1;
        }

        //max
        if(n%4==0){
            mx=n/4;
        }
        else if(n%4==2){
            mx=n/4;
        }
        
        if(mx==0 && min!=0){
            mx=min;
        }
        else if(mx==0 && min==0){
            cout<<-1<<endl;
            continue;
        }
        else if(mx!=0 && min==0){
            min=mx;
        }

        cout<<min<<" "<<mx<<endl;
    }
}