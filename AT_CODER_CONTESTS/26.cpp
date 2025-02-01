#include<iostream>
using namespace std;
int main(){
  string d;
  cin>>d;
  if(d=='N'){
    cout<<'S';
  }
  else if(d=='E'){
    cout<<'W';
  }
  else if(d=='W'){
    cout<<'E';
  }
  else if(d=='S'){
    cout<<'N';
  }
  else if(d=="NW"){
    cout<<"SE";
  }
  else if(d=="NE"){
    cout<<"SW";
  }
   else if(d=="SE"){
    cout<<"NW";
  }
  else{
    cout<<"NE";
  }
  return 0;
  
  
}