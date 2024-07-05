#include<iostream>
using namespace std;
void fun(int x=8, float y=3.1){
    cout<<x<<" "<<y;
}
int main(){
    fun(4.7);//int(4.7) hoga in fun 
}