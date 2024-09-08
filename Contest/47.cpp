#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int n=s.size();
    vector<string> a;
    int count=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]==t[i]){
            continue;
        }
        else{
            s[i]=t[i];
            a.push_back(s);
            count++;
        }

    }
    cout<<count<<endl;
    sort(a.begin(), a.end()); 

    for (vector<string>::size_type i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }

    return 0;



}