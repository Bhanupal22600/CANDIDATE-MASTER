#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>//for string stream
using namespace std;
int main(){

    string str="bhanu is a candidate master";
    stringstream ss(str);
    string temp;

    while(ss>>temp){//this ss >> temp is like we take cin >> x eska matlab tha user se x ka input lo yaha pr ss >> temp ka mtlb hai ss me se temp ka input lo
       //learn this syntax aur yaha pr yeh khud aage badhega jase phele bhanu then is then a
       
        cout<<temp<<endl;
    }

    

}