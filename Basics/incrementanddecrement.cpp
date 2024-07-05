#include<iostream>
using namespace std;
int main(){
    int x;
    x=5;
    cout<<x<<endl;
    x=x+1;
    cout<<x<<endl;
    ++x;//pre increment,means x=x+1
    cout<<x<<endl;
    x++;//post increment,means x=x+1
    cout<<x<<endl;
    //difference between them;
    int y=6;//pre increment
    cout<<++y<<endl;//phele increment kro then print
    cout<<y<<endl;
    int z=6;//post increment
    cout<<z++<<endl;//phele print then increment kro
    cout<<z;
    // /**/ multi line comment
    // select the paragraph which you have to comment then ctrl + slash create comment in each line of paragraph
    //similarly,
    int k=8;
    cout<<k<<endl;
    cout<<--k<<endl;
    cout<<k--<<endl;
    cout<<k;

}