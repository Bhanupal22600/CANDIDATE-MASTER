#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){
        if(i%2==0){
            continue;// when continue is executed then its below code is not executed
            
        }
        cout<<i<<endl;
        
    }
}