#include<iostream>
#include<string>
using namespace std;
void calc(){
    string s;
    cin>>s;
    s.pop_back();
    s.pop_back();
    cout<<s+"i"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}