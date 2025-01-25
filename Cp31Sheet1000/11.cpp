#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i=0;
    int j=n-1;
    int count=0;
    int cn=0;
    int sum=0;
    while(i<=j){
        if(cn==0){
            sum+=v[j];
            cn=1;
        }
        else{
            if(sum>d){
                count++;
                sum=0;
                cn=0;
                j--;
            }
            else{
                sum+=v[j];
                i++;
            }
        }
    }
    cout<<count<<endl;


}