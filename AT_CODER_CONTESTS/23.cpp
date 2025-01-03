#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int count=0;
    int i=0;
    while(i<n-1){
        if(s[i]=="sweet"){
            count++;
        }
        else{
            if(count<=1){
            count=0;
            }
            else{
                cout<<"No";
                return 0;
            }
            
        }
        i++;

    }
    if(count<2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}