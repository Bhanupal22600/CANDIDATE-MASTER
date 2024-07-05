//write a program to check whether a given character(#can be non alphabetic) is a vowel or a consonant.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int ascii=(int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
       if(ch='a'|| ch=='e' || ch=='i' || ch=='u'|| ch=='A'|| ch=='E' || ch=='I'|| ch=='O' ||ch=='U'){
        cout<<"the character is a vowel";
       }
       else{
        cout<<"the character is a consonant";
       }
    }
    else{
        cout<<"The character is not an alphabet";
    }
}