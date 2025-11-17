#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cn=0;
    for(int i=0;i<s.size()-2;i++){
        if(s[i]=='A'){
            for(int j=i+1;j<s.size()-1;j++){
                if(s[j]=='B'){
                    for(int k=j+1;k<s.size();k++){
                        if(s[k]=='C' && k-j==j-i){
                            cn++;
                        }

                    }
                }
            }
        }
    }
    cout<<cn;
    return 0;
}