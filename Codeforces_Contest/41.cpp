#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int count=n/111;
    int rem=n%111;
    if(rem==0) {
        cout<<count*111<<endl;
        return;
    }
    cout<<(count+1)*111<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}