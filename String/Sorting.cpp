#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);//we can give a sentense also
    // # ascii value of space is less than ascii value of 'a'
    sort(s.begin(),s.end());// ascii value k acc sort hoga
    cout<<s<<endl;


    //for more clearity
    char ch=' ';
    cout<<(int)ch;

}