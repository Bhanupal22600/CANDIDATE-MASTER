#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void calc(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxm=0;
    int cnt=1;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        
        if((arr[i+1]-arr[i])<=k){
            cnt++;
        }
        else{
            maxm=max(cnt,maxm);
            cnt=1;
            continue;
        }

        
    }
    maxm=max(cnt,maxm);
    cout<<n-maxm<<endl;
    
}
int main()
{
   int t;
   cin>>t;
   while(t--){
       calc();
   }
}