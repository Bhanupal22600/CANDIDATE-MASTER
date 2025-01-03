#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
vector<int> arr(n);
long long int sum=0LL;
for(int i=0; i<n; i++) cin>>arr[i];
for(int i=0; i<n; i++) sum+=arr[i];
sort(arr.begin(), arr.end());
long long int x1=sum-y, y1=sum-x;
x=x1;
y=y1;
int ans=0;
for(int i=0; i<n-1; i++){
    if(arr[i]>y) break;
    long long int need1=x-arr[i]-1, need2=y-arr[i];
    int l1=i+1, r1=n-1;
    while(l1<=r1){
        int mid=(r1-l1)/2+l1;
        if(arr[mid]<need1){
            l1=mid+1;
        }
        else r1=mid-1;
    }
    int l2=i+1, r2=n-1;
    while(l2<=r2){
        int mid=(r2-l2)/2+l2;
        if(arr[mid]<=need2){
            l2=mid+1;
        }
        else r2=mid-1;
    }
    ans+=l2-l1;
        }
 
        cout << ans << endl;
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
 
    return 0;
}