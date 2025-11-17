#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<char>> v(8,vector<char>(8));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<char>> r=v;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(v[i][j]=='#'){
                for(int k=0;k<8;k++){
                    r[i][k]=='#';
                }
                for(int l=0;l<8;l++){
                    r[l][j]=='#';
                }

            }
        }
    }
    int count=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(r[i][j]=='.') count++;
        }
    }
    cout<<count;




}