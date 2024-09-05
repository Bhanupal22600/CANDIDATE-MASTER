#include<iostream>
using namespace std;
void calc(){
    int r;
    cin>>r;
     char arr[r][4];
    for(int i=0;i<r;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=r-1;i>=0;i--){
        for(int j=0;j<4;j++){
            if(arr[i][j]=='#'){
                cout<<j+1<<" ";
            }
        }
    }
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}