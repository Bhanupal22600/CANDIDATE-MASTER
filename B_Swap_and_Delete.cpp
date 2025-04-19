#include <bits/stdc++.h>
using namespace std;
// void calc1() {
//     string s;
//     cin>>s;
//     int n=s.size();
//     int cn1=0;
//     int cn0=0;
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     for(int i=0;i<n;i++){
//         if(s[i]=='1') cn1++;
//         else cn0++;
//     }
//     int ans=0;
//     int i;
//     for(i=0;i<n;i++){
//         if(s[i]=='0'){
//            if(cn1){
//             cn1--;
//            }
//            else{
//             break;
//            }
//         }
//         else{
//             if(cn0){
//                 cn0--;
//                }
//                else{
//                 break;
//                }
//         }
//     }
   
    
//     cout<<n-i<<endl;
//     return;

    
// }
void calc2() {
    string s;
    cin>>s;
    int n=s.size();
    int cn1=0;
    int cn0=0;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='1') cn1++;
        else cn0++;
    }
    int ans=0;
    if(cn1>cn0){
        ans+=cn1-cn0;
        int k=0;
        for(int i=0;i<n-(cn1-cn0);i++){
            if(s[i]=='1'){
                k++;
            } 
            else{
                cn0--;
            }
        }
            ans+=k-cn0;
    }
    else if(cn0>cn1){
        ans+=cn0-cn1;
        int k=0;
        for(int i=0;i<n-(cn0-cn1);i++){
            if(s[i]=='0'){
                k++;
            }
            else{
                cn1--;
            }
        }
        if(k>cn1){
            ans+=k-cn1;
        }
        else{
            
        }
    }
    else{
        cout<<ans<<endl;
        return;
    }
    cout<<ans<<endl;
    return;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        
        calc2();
    }
    return 0;
}