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
    for(int i=0;i<n;i++){
        if(i<n/2){
            if(v[i]>2*(n-(i+1))){
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else{
            if(v[i]>2*(i)){
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
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