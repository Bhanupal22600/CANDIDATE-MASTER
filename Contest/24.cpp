#include<iostream>
#include<string>
using namespace std;
void calc(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;

    for(int i=0;i<4*n;i++){
        if(s[i]=='A' && count1<n){
            count1++;
        }
        else if(s[i]=='B'&& count2<n){
            count2++;
        }
        else if(s[i]=='C'&& count3<n){
            count3++;
        }
        else if(s[i]=='D'&& count4<n){
            count4++;
        }
    }
    cout<< count1+count2+count3+count4;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}