#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
        vector<int> nums={7,1,5,4};
        int n=nums.size();
        int minm=INT_MAX;
        int maxm=INT_MIN;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i]=min(minm,nums[i]);
            minm=min(minm,nums[i]);
        }
        vector<int> u(n);
        for(int i=n-1;i>=0;i--){
            v[i]=max(maxm,nums[i]);
            maxm=max(maxm,nums[i]);
        }
        for(auto el : v){
            cout<<el<<" ";
        }
        cout<<endl;
        for(auto el : u){
            cout<<el<<" ";
        }
        int ans=INT_MIN;
        for(int i=n-1;i>0;i--){
            ans=max(ans,u[i]-v[i-1]);
        }
        cout << ans;
    }