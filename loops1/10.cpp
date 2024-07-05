//WAP to print sum of digits of a given no.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int lastdigit;
    while(n>0){
        lastdigit =n%10;
        sum+=lastdigit;
        n/=10;
    }
    cout<<sum;
}