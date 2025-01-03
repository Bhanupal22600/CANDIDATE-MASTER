#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k=0;
    int l=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            if(l>0){
                k++;
                l=0;
            }
        }
        else{
            l++;
        }
    }
    if(l>0) k++;

    if (k>2)
    {
        cout<<2<<endl;
    }
    else{
    
    cout<<k<<endl;
    }
return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}