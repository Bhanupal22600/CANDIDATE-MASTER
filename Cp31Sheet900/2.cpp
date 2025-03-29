#include<iostream>
#include<vector>

using namespace std;

void calc(){
    int n,k;
    cin>>n>>k;
    vector<char> s(n);
    vector<int> v(26,0);
    for(int i=0;i<n;i++){
        cin>>s[i];
        v[s[i]-97]++;
    }
    if(k==0 && n==1 ){
        cout<<"YES"<<endl;
        return;
    }
    int cn1=0;
    int cn2=0;
    for(int i=0;i<26;i++){
        if(v[i]==1){
            cn1++;
        }
        else if(v[i]==2){
            cn2++;
        }
        else if(v[i]>0 && v[i]%2!=0){
            cn2+=v[i]/2;
            cn1++;
        }
        else if(v[i]>0 && v[i]%2==0){
            cn2+=v[i]/2  ;
        }
    }
        k=k-(cn1-1);

        if(k<0){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cn2=cn2*2-k;
            if(cn2%2!=0 ){
                cout<<"YES"<<endl;
                return;
            }
            else{
                cout<<"YES"<<endl;
                return;
            }


        }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}