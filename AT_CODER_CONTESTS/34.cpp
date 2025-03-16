#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
bool isSorted(const std::vector<int>& v) {
    return is_sorted(v.begin(), v.end());
}
void calc(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=1;i<n;i++){
      c[i]= b[0]-a[i];
    }
    a[0]=min(b[0]-a[0],a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1] && c[i]>=a[i-1]) a[i]=min(c[i],a[i]);
        else if(a[i]>=a[i-1] && c[i]<a[i-1]) a[i]=a[i];
        else if(a[i]<a[i-1] && c[i]>=a[i-1]) a[i]=c[i];
        else{
            cout<<"NO"<<endl;
            return;
        }

    }
    cout<<"YES"<<endl;
    return;
    
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}