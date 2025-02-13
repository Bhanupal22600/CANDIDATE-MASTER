#include<iostream>
#include<string>
using namespace std;
void calc(){
    string s;
    cin>>s;
    if(s.size()==1){
        cout<<1<<endl;
        return;
    }
    int idx=-1;
    for(int i=s.size()-1;i>0;i--){
        if(s[i]==s[i-1]){
            idx=i;
            cout<<"1"<<endl;
            return;
            break;

        }
    }
   cout<<s.size()<<endl;
   return;
        
   

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}