#include<iostream>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++ ){
        arr[i]=i+1;
    }
    int l=1;
    int r=2;
    int count=0;
    for(int i=0;i<q;i++){
        char c;
        int k;
        cin>>c>>k;
        if(c=='R'){
           if(l<r && l<k || l>r && l>k){
                if(k>=r){
                    count+=k-r;
                }
                else{
                    count+=r-k;
                }
           }
           else{
            if(k>r){
                count+=n-(k-r);
            }
           }


        }   
        else{
            if(r<l && r<k || r>l && r>l){
                if(k>=l){
                    count+=k-l;
                }
                else{
                    count+=l-k;
                }
           }
           else{
            if(k>l){
                count+=n-(k-l);
            }
           }

        }
        
     }
     cout<<count;
}