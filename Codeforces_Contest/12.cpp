#include<iostream>
using namespace std;
void calc(){
    int n,k;
    cin>>n>>k;
    int arr[k][2];
    for(int i=0;i<k;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    if(k<=n){
        for(int i=0;i<k;i++){
            sum+=arr[i][1];
        }
        return sum;
    }
    else{
        int maxm=0;
        int a=0;
        for(int i=0;i<k;i++){
            for(int j=0;j<2;j++){
                //code
            }
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