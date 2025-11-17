#include<iostream>
#include<vector>
#include<string>
using namespace std;
int calc(){
    int h,w,x,y;
    cin>>h>>w>>x>>y;
    x--;
    y--;
    vector<vector<char>> v(h,vector<char>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<bool>> copy(h,vector<bool>(w,false));

    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='U'){
            if(v[x-1][y]=='@'){
                if(copy[x-1][y]==false){
                copy[x-1][y]=true;
                count++;
                }
                x--;
            }
            else if(v[x-1][y]=='.'){
                x--;
            }

        }
        else if(s[i]=='D'){
            if(v[x+1][y]=='@'){
                if(copy[x+1][y]==false){
                copy[x+1][y]=true;
                count++;
                }
                x++;
            }
            else if(v[x+1][y]=='.'){
                x++;
            }

        }
        else if(s[i]=='L'){
            if(v[x][y-1]=='@'){
                if(copy[x][y-1]==false){
                copy[x][y-1]=true;
                count++;
                }
                y--;
            }
            else if(v[x][y-1]=='.'){
                y--;
            }
        }
        else{
            if(v[x][y+1]=='@'){
                if(copy[x][y+1]==false){
                copy[x][y+1]=true;
                count++;
                }
                y++;
            }
            else if(v[x][y+1]=='.'){
                y++;
            }
        }
        

    }
    
        
    cout<<x+1<<" "<<y+1<<" "<<count;

return 0;
}
int main(){
    calc();
}