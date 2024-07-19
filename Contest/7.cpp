#include<iostream>
#include<vector>
using namespace std;
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> v;
       int  m=matrix.size();
        int n=matrix[0].size();
        bool flag;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                flag=true;
                for(int k=0;k<n;k++){
                    if(matrix[i][j]<=matrix[i][k]){
                        continue;
                    }
                    else{
                        flag=false;
                        break;
                        
                    }
                    
                }
                if(flag){for(int k=0;k<m;k++){
                    if(matrix[i][j]>=matrix[k][j]){
                        continue;
                    }
                    else{
                        flag=false;
                        break;
                    }
                    
                }}
                if(flag==true){
                    v.push_back(matrix[i][j]);
                }


            }
        }
        return v;
    }

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> matrix( m,vector<int> (n));
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    vector<int> result=luckyNumbers(matrix);
    int k=result.size();
    for(int i=0;i<k;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;

}