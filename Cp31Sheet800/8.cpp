#include<iostream>
using namespace std;
int calc1(int i,int j){
    if(i==0 || i==9){
        return 1;
    }
    else if(i==1 || i==8){
        if(j==0 || j==9) return 1;
        else return 2;
        
    }
    else if(i==2 || i==7){
        if(j==0 || j==9) return 1;
        else if(j==1 || j==8) return 2;
        else return 3;
        
    }
    else if(i==3 || i==6){
        if(j==0 || j==9) return 1;
        else if(j==1 || j==8) return 2;
        else if(j==2 || j==7) return 3;
        else return 4;
        
    }
    else {
        if(j==0 || j==9) return 1;
        else if(j==1 || j==8) return 2;
        else if(j==2 || j==7) return 3;
        else if(j==3 || j==6) return 4;
        else return 5;
        
    }


}
int calc(){
    char arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>arr[i][j];

        }
    }
    int sum=0;
     for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]=='X'){
                sum+=calc1(i,j);
            }

        }
    }
    return sum;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<calc();
    }
}