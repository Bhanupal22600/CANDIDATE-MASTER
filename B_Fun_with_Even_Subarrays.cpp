#include <bits/stdc++.h>
using namespace std;
void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0;
    int len = 1; // matching suffix length from end

    for (int i = n - 2; i >= 0; ) {
        if (v[i] == v[n - 1]) {
            len++;
            i--;
        } else {
            ans++;
            i -= len;
            len *= 2;
        }
    }
    cout << ans << '\n';
}
void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c=1;
    int ans=0;
    int i=n-2;
    for(int j=n-2;j>(n-1)/2;j--){
        if(v[j]!=v[n-1]) {
            i=j;
            break;
        }
    }
    while(i>=0){
        int k=0;
        int l=i;
        while(k<c && l>=0){
            if(v[l]!=v[n-1]) {
                ans++;
                break;
            }
            l--;
            k++;
        }
        i-=c;
        c=c*2;
    }
}
// else{
//     while(i>=1){
//          int k=0;
//         int l=i;
//         while(k<c && l>=0){
//             if(v[l]!=v[n-1]) {
//                 ans++;
//                 break;
//             }
//             l--;
//             k++;
//         }
//         i-=c;
//         c=c*2;
//     }
//     if(v[0]!=v[n-1]) ans++;
// }
    cout<<ans<<endl;
    return;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}