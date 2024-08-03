//Generate all binary strings of length n without consecutive 1's
#include<iostream>
using namespace std;
int n=3;//Global variable can be used in any function
void generate (string s, int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n-1);
    if(s=="" || s[s.length()-1]=='0') generate(s+'1', n-1);

}
int main(){
    int n=3;
    generate("",n);
}