#include<iostream>
using namespace std;
void calc(){
 int n;
 cin>>n;
 string s;
 cin>>s;
 int cn1=0;
 int cn2=0;
 if(n<3){
    cout<<0<<endl;
    return;
 }
 else{
    for(int i=0;i<n;i++){
        if(s[i]=='-') cn1++;
        else cn2++;
    }
 }
 if(cn1%2==0){
    int x= (cn1/2)*(cn1/2);
    cout<<((x)*cn2)<<endl;
    return;
 }
 else{
    int x=(cn1/2)*((cn1+1)/2);
    cout<<x*cn2<<endl;
 }
       
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    calc();
  }  
} 
