#include <bits/stdc++.h>
using namespace std;

class Loading{
public:
    // this is known as polymorphism as sum func name used multiple times
    void sum(string a,string b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
    // int sum(int a,int b){//error
    //     return a+b;
    // }
    // see above 2nd and 4th fun are same name and same data type inside func so this cause function overloading
};
int main() {
    Loading a;
    a.sum(5,8);
    a.sum(4,9,2);
    a.sum("Bhanu","pal");
    return 0;
}