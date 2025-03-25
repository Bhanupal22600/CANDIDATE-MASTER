#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> v(n);
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }
    else{
    for(int i=n;i>0;i--){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}