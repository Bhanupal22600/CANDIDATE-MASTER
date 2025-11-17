#include<iostream>
#include<string>
using namespace std;
int main(){
    string t;
    cin>>t;
    int len=0;
    for(int i:t){
        len++;
    }
    if(len%2!=0){
        cout<<"No";
        return 0;
    }
    for(int i=0;i<len-1;i+=2){
        if(t[i]!=t[i+1]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    cout<<endl;
}