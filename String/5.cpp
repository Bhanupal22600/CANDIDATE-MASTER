//Input a string of even length and reverse the first half of the string.
#include<iostream>
#include<algorithm>//for s.begin func
using namespace std;
int main(){
   string s;
   getline(cin,s);//now we can take a sentence also as input
   //reverse first half
   int n =s.length();
   reverse(s.begin(),s.begin()+n/2);
   cout<<s;
}