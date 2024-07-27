#include<iostream>
using namespace std;
int calc(){
    int n;
    cin>>n;
    if(n%4==0){
        return n/4;
    }
    else{
        return (n/4)+1;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<calc()<<endl;

    }
}