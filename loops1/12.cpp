//print the sum of this series:
//1-2+3-4+5-6..upto 'n'.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum-=i;
        }
        else sum+=i;
     
    }
    cout<<sum;
}
//alternate
// if(n%2==0) sum=-n/2;
// else sum=-n/2 +n;#-n/2+n!=n/2
// cout<<sum;
// )