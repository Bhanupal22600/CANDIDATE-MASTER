#include<iostream>
using namespace std;
int a=3;//global variable can be used inside of any fun
void fun(){
//cout<<x; as x has limit inside its function ie main only
cout<<a;// 
}

int main(){
    int x=4;
    cout<<x<<endl;
    fun();
}