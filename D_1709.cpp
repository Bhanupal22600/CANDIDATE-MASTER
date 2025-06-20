#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> brr(n);
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    vector<int> a=arr;
    vector<int> b=brr;
    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                ans++;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(brr[j]>brr[j+1]){
                ans++;
                swap(brr[j],brr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>brr[i]){
            ans++;
            swap(arr[i],brr[i]);
        }
    }





    cout<<ans<<endl;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                cout<<1<<" "<<j+1;
                cout<<endl;
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(b[j]>b[j+1]){
                cout<<2<<" "<<j+1;
                cout<<endl;
                swap(b[j],b[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            cout<<3<<" "<<i+1;
            cout<<endl;
            swap(arr[i],brr[i]);
        }
    }

    return ;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}