#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    int cn=0;
sort(arr, arr + n);    
for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) {
            cn++;
            bool flag=true;
            for(int k=0;k<v.size();k++){
                if(v[k]==arr[i]) flag=false;
            }
            if(flag){
            v.push_back(arr[i]);
            }
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}