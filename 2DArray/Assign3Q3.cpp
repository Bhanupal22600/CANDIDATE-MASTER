#include<iostream>
#include<vector>
using namespace std;
int main(){
        int m;
        cin>>m;
        int n;
        cin>>n;
        vector< vector<int> > v(m,vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==0){
                    for(int k=0;k<n;k++){
                        v[i][k]==0;
                    }
                    for(int k=0;k<m;k++){
                        v[k][j]==0;
                    }

                }
            }
        }












        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
}