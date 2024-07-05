//display the P-1,3,5,7,9.. TERMS
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i+=2){
        cout<<i<<endl;
    }
}