#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s= to_string(n);
    cout<<s[1]<<s[2]<<s[0]<<' ';
    cout<<s[2]<<s[0]<<s[1];
    
}