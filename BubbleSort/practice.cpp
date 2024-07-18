//sort a string in decreasing order of values associated after removal of values smaller than X.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="AZYZXBDXJK";
    string str = "";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    sort(str.begin(),str.end());
    cout<<str;
}