#include<iostream>
using namespace std;
bool Is_Fair(long long n){
    long long x=n;
    int r=0;
    while(x>0){
        r=x%10;
        if(r!=0 && n%r!=0){
            return false;
        }
        x=x/10;
    }
    return true;
}
void calc(){
    long long n;
    cin>>n;
    while(!Is_Fair(n)) n++;
    cout<<n<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}