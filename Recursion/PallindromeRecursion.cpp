#include<iostream>
using namespace std;
bool isPallindrome1(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
//iterative method

bool isPallindrome2(string s, int i, int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return isPallindrome2(s,i+1,j-1);
}

int main(){
    string s ="abcdcba";
    cout<<isPallindrome1(s)<<endl;
    cout<<isPallindrome2(s,0,s.length()-1);

}