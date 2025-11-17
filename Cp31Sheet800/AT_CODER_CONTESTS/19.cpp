#include<iostream>
#include<string>
using namespace std;
int main(){
    int len;
    cin>>len;
    string t;
    cin>>t;

    if(len%2==0) {
        cout<<"No";
        return 0;
    }
    int mid=(len+1)/2;
    for(int i=0;i<mid-1;i++){
        if(t[i]!='1'){
            cout<<"No";
            return 0;
        }
    }
     if (t[mid-1] != '/') {
        cout << "No" << endl;
        return 0;
    }
    for(int i=mid;i<len;i++){
        if(t[i]!='2'){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;


    


}