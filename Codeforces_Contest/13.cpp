#include<iostream>
#include<string>
#include<climits>
using namespace std;
void calc(){
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int x=0,y=0;
    int d=INT16_MAX/2;
    int count=0;
    int i=0;
    while(count!=d){
        if(s[i]=='N'){
            y++;
        }
        else if(s[i]=='S'){
            y--;
        }
        else if (s[i]=='E'){
            x++;
        }
        else {
            x--;
        }
        if(x==a && y==b){
            cout<<"YES"<<endl;
            return;
        }
        i++;
        count++;
        if(i==n) i=0;
        
    }
    cout<<"NO"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();

    }
}