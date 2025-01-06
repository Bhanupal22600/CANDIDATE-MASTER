#include<iostream>
using namespace std;
void calc(){
    int x,n;
    cin>>x>>n;
    int count=1;
    while (n--)
    {
       if(x%2==0){
        x-=count;
       } 
       else{
        x+=count;
       }

       count++;
    }

    cout<<x<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}