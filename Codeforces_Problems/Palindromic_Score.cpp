#include <bits/stdc++.h>
using namespace std;

void calc() {
    int a,b,c;
    cin>>a>>b>>c;
    if((a==0 && b==0) || (b==0 && c==0) || (c==0 && a==0) ){
        cout<<0<<endl;
        return;
    }
    else if(a==0 || b==0 || c==0){
        if(a==0){
            cout<<min(b,c)<<endl;
            return;
        }
        else if(b==0){
            cout<<min(a,c)<<endl;
            return;
        }
        else {
            cout<<min(b,a)<<endl;
            return;
        }
    }
    else if(a%2==1 && b%2==1 && c%2==1){
        cout<<(a+b+c)-max(a, max(b, c))-1<<endl;
        return;
    }
    else if(a%2==0 && b%2==0 && c%2==0){
        cout<<(a+b+c)-max(a, max(b, c))<<endl;
        return;
    }
    else if(a%2==0 && b%2==0 && c%2==1 || a%2==1 && b%2==0 && c%2==0 || a%2==0 && b%2==1 && c%2==0){
        if(c%2==1){
            int maxm = max(a, max(b, c));
        if(maxm%2==0 && maxm>c){
            cout<<min(a,b)+c<<endl;
            return;
         }
        else{
            cout<<a+b<<endl;
            return;
            }
        }
        if(b%2==1){
            int maxm = max(a, max(b, c));
            if(maxm%2==0 && maxm>b){
                cout<<min(a,c)+b<<endl;
                return;
             }
            else{
                cout<<a+c<<endl;
                return;
                }
            }
            if(a%2==1){
                int maxm = max(a, max(b, c));
                if(maxm%2==0 && maxm>a){
                    cout<<min(c,b)+a<<endl;
                    return;
                 }
                else{
                    cout<<c+b<<endl;
                    return;
                }
            }
    }
    else if(a%2==0 && b%2==1 && c%2==1 || a%2==1 && b%2==1 && c%2==0 || a%2==1 && b%2==0 && c%2==1){
        if(c%2==0){
            int maxm = max(a, max(b, c));
            if(maxm%2==1 && maxm>c){
                cout<<min(a,b)+c<<endl;
                return;
             }
            else{
                cout<<a+b-1<<endl;
                return;
                }
            }
            if(b%2==0){
                int maxm = max(a, max(b, c));
                if(maxm%2==0 && maxm>b){
                    cout<<min(a,c)+b<<endl;
                    return;
                 }
                else{
                    cout<<a+c-1<<endl;
                    return;
                    }
                }
            if(a%2==0){
                int maxm = max(a, max(b, c));
                    if(maxm%2==0 && maxm>a){
                        cout<<min(c,b)+a<<endl;
                        return;
                     }
                    else{
                        cout<<c+b-1<<endl;
                        return;
                        }
            }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}