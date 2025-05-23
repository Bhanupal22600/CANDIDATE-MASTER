#include <bits/stdc++.h>
using namespace std;

void calc() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> v;
    if(a<b){
        a++;
        while(a<b){
            
            v.push_back(a);
            a++;

        }
    }
    else{
        b++;
        while(b<a){
            
            v.push_back(b);
            b++;

        }
    }
    if((a==c && b==d) || (a==d && b==c)){
        cout<<"NO"<<endl;
        return;
    }
    bool flag1=false;
    bool flag2=false;
    for(auto el : v){
        if(el==c ){
            flag1 = true;
        }
        else if(el == d){
            flag2=true;
        }
    }
    if((flag1 && flag2  ) || (!(flag1) && !(flag2))){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return;

    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}