#include<iostream>
#include<vector>
using namespace std;
void rec(vector<vector<int>> ans,int d,int a,int count){
    int flag=true;
    for(int i=0;i<n;i++){
        if(ans[i][1]!=0){
            flag=false;
            break;
        }
    }
    if(!flag){
    int maxm = max_element(ans[][1].begin(), ans[][1].end());
    int idx=0;
    for(int i=0;i<n;i++){
        if(ans[i][1]==maxm)  idx=i;
    }
    count+=(v[idx]+(a-1))/a;
    for(int i=0;i<n;i++){
        if(ans[i][0]<=ans[idx][0]+d || ans[i][0]>=ans[idx][0]-d){
            ans[i][0]=0;
        }
    }
    ans[idx]=0;
    rec(ans,d,a,count);
    }
    else{
        cout<<count<<endl;
        return;
    }


}
int main(){
    int n,d,a;
    cin>>n>>d>>a;
    vector<vector<int>> v(n,vector<int>(2));
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>v[i][j];
        }
    }
    int count=0;
    rec(v,d,a,count);



}