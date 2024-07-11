#include<iostream>
#include<string>//wase toh dikkat nhi hoti ese na lagane pr bhi fir bhi de diya kro.
using namespace std;
int main(){
    string s="abcdef";
    //s.substr(idx,len)
    cout<<s.substr(1,3)<<endl;//ef
    // this(1,3) means 1 index se lekr 3 length ki substring utha lo 
    cout<<s.substr(2);//means 2 index se end tak lelo agr length nhi hai toh
}