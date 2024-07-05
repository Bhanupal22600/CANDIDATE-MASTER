#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v(5);//hamara ek vector ban chuka hai with size 5 and automatically 0 fill ho gya hai
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    vector<int> u(5,7);//this means hmne each element m 7 fill krdiya and size 5 hai
    cout<<u[3];


}