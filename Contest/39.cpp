#include<iostream>
using namespace std;
void calc(){
    int l,r;
    cin>>l>>r;
    int count=0;
    int first=l;
    int second=l+1;
    count++;
    while(second<=r){
        count++;
        second+=count;
    }
    cout<< count<<endl;
    
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}