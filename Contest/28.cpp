#include<iostream>
using namespace std;
string calc(){
    int n,s,m;
    cin>>n>>s>>m;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(int i=0;i<=s;i++){
        for(int j=0;j<n;j++){
        if(arr[j][0]<=i<=arr[j][1]){
            count =0;

            continue;

        }
        else{
            count++;
        }
        if(count == s){
            return "YES";
            break; 
        }
        }
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
    string flag  = calc();
       cout<<flag;
    }
}