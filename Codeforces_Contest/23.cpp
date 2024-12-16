#include<iostream>
using namespace std;
void calc(){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int count=0;
    if(m<a){
        count+=m;
    }
    else if(m>a){
        count+=a;
        if(m-a>c){
            count+=c;
            c=0;
        }
        else{
            count+=m-a;
            c=c-(m-a);
        }
    }
    else{
        count+=a;
    }


    if(m<b){
        count+=m;
    }
    else if(m>b){
        count+=b;
        if(m-b>c){
            count+=c;
        }
        else{
            count+=m-b;
            c=c-(m-b);
        }
    }
    else{
        count+=b;
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