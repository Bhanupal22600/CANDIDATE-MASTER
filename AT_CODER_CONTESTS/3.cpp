#include<iostream>
using namespace std;
int main(){
    string S;
    cin>>S;
    if(S[0]=='A' || S[1]=='A' || S[2]=='A'){
        if(S[0]=='B' || S[1]=='B' || S[2]=='B'){
            if(S[0]=='C' || S[1]=='C' || S[2]=='C'){
                cout<<"Yes";
            }
            else{
               cout<<"No";
          }
        }
        else{
        cout<<"No";
    }
    }
    else{
        cout<<"No";
    }
}