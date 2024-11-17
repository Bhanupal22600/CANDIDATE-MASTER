#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}