#include<iostream>
using namespace std;
int main(){
    string str="bhanu pal";
    cout<<str<<endl;

    string s;
    cin>>s;
    cout<<s;


    //problem
    string s1;
    //hardcode m string m sentence dal k print kr sakte hai but dont do this 
    //through user input as cin space dekhte hi next part ko agal treat krega
    cin>>s1;// give bhanu pal as input
    //cin work only if the given string has no space
    cout<<s1;// see only bhanu print

//reason
    int a,b;
    cin>>a;
    cin>>b;
    cout<<a<<" "<<b;//as here after entering a no if i gave a space
    //then giving a no then automatically it is treated a another no similiarly in string.


     string name;
    //solution
    getline(cin,s);//VVIMP
    cout<<name;


}