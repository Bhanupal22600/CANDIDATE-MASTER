#include<iostream>
using namespace std;
string main_c(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c) return "yes";
    else if(a+b==c || b+c==a || a+c==b) return "yes";
    else return "no";
}
int main(){
    cout<<main_c();
}