#include<iostream>
using namespace std;
void calc(){
    long long x,y,k;
    cin>>x>>y>>k;
    long long stick=1;
    long long need=y*k;
    need+=k;
    long long count=0;
    stick+=x-1;
    count++;
    need-=x;
    count+=(need+x-2)/(x-1);
    count+=k;
    cout<<count<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}