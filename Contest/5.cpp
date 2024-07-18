#include<iostream>
using namespace std;
int cal(int n=1,int m=1){

    int a[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    return -1;
}
void calc(int n,int m){
    
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[n-i-1][m-j-1]=a[i][j];
        }
    }
    if((m*n)%2!=0){
        int temp=b[0][0];
        b[0][0]=b[n/2][m/2];
        b[n/2][m/2]=temp;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }


}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,m1;
        cin>>n1>>m1;
        if(n1==1 && m1==1){
            cout<<cal();
            cout<<endl;
            
        }
        else{
        calc(n1,m1);
        }
    }
    return 0;
}