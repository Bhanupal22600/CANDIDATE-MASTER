#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int diff=INT_MAX;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if(int (v[i+1]-v[i])<diff){
            diff=(v[i+1]-v[i]);
        }
    }
    if(diff<0) cout<<"0"<<endl;
    else{
    cout<<(diff/2+1)<<endl;
    }

    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}