#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>> s;
    int n=s.length();
    int count=0;
    int flag=0;
    for(int i=0;i<n;i++){
        if(s[i]=='|' && flag==0){
            flag=1;

        }
        else if(s[i]=='|' && flag==1){
            cout<<count<<" ";
            count=0;
            flag=1;
        }
        else{
            count++;
        }
    }
}