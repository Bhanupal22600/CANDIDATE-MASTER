#include<iostream>
using namespace std;
string calc(){
    int a,b;
    cin>>a>>b;
    if(a==0 && b%2==0 || b==0 && a%2==0){
        return"YES";
    }
    if(a%2==0 && b%2==0){
        return "YES";
    }
    else if(a%2==0 && a!=0 && b%2!=0){
        return "YES";
    }
    else if(b%2==0 && b!=0 && a%2!=0){
        return "NO";
    }
    else{
        return "NO";
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
    cout<<calc()<<endl;
    }
}