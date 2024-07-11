//Input a string of size n and update all the even positions in the string to character 'a'.Consider 0-based indexing.
#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    string str; 
       cin>>str;
    cout<<str<<endl;
    for(int i=0;i<n;i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str<<endl;
}