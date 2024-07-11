#include<iostream>
#include<string>
#include<algorithm>//for s.begin and s.end func
using namespace std;
int main(){
    string str="bhanu is a candidate master";
    cout<<str.size()<<endl;
    //this built in function also include space between string 
    //but this will not count null character ie '\0'at the last
    //it will tells us only usable character. start count from 1 like in array length we does.

    int len = str.length(); //same as size
    //so index is 0 to str.length()-1.


//push_back()
    string str1="abcd";
    cout<<str1<<endl;
    str1.push_back('e');
    str1.push_back('f');
    // str1.push_back("def"); #this will generate an error as we can only pushback a character.
    str1.push_back('g');
    cout<<str1<<endl;
    


//pop_back()
    string str2="bhanu";
    cout<<str2<<endl;
    str2.pop_back();
    cout<<str2<<endl;
    str2.pop_back();
    cout<<str2<<endl;


// + operator to add two string.
string u="abc";
cout<<u<<endl;
string v="def";
cout<<v<<endl;
u=u+v;
cout<<u<<endl;
v="abc"+v;// we can add  string to string.
cout<<v<<endl;


//reverse()
string s="abcdef";
cout<<s<<endl;
reverse(s.begin(),s.end());
cout<<s<<endl;
reverse(s.begin()+2,s.end());
cout<<s<<endl;
reverse(s.begin()+2,s.begin()+5);//last wal ie  4th index include nhi hota
cout<<s<<endl;


}