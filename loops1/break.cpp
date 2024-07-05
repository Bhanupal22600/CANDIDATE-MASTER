//no is composite no or not
#include<iostream>
using namespace std;//composite no whcih are divisible by 1,n or any other its product
int main(){
    int n;
    cin>>n;
    if(n==1)cout<<" 1 is not a composite no";
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<n<<" is a composite no";
            break;
        }
    }
}