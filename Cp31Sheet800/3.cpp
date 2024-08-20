#include<iostream>
#include<string>
using namespace std;
int calc(){
    int n;
    cin>>n;
    char s[n];
    for(int i =0;i<n;i++){
    cin>>s[i];
   }
   int cn=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.') cn++;
        else if(s[i]=='#'){
            cn=0;
        }
        if(cn==3){
            return 2;
        }
        
    }
    int count =0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            if(count<2 ) count++;
            
            if(i==n-1){
                sum+=count;
            }

            
        }
        else if(s[i]=='#' ){
            sum+=count;
            count=0;
        }

    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<calc()<<endl;
    }
}