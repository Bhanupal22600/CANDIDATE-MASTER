#include<iostream>
using namespace std;
void calc(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int i=1;
    int count=0;

    while(!(count>=n)){
        if(i%3==1) count+=a;
        else if(i%3==2) count+=b;
        else count+=c;
        i++;
    }
    cout<<i-1<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}