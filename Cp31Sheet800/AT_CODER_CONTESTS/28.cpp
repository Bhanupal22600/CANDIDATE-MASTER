#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a*b==c) {
        cout<<"Yes";
        return 0;
    }
    else if(b*c==a){
        cout<<"Yes";
        return 0;
    }
    else if(c*a==b){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
    return 0;
}
