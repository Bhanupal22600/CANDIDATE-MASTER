#include<iostream>
using namespace std;
//sr=starting row,sc=starting column, ec=ending column,er= ending row
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways= rightways + downways;
    return totalways;
}
//maze2() is more optimized than maze()
int maze2(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightways = maze2(row,col-1);//right
    int downways=maze2(row-1,col);//down
    int totalways= rightways + downways;
    return totalways;
}
void printPath(int sr, int sc, int er, int ec,string s){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec) {//destination reached
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R');//right
    printPath(sr+1,sc,er,ec,s+'D');//down
    
}
int main(){
    cout<<maze(0,0,2,2)<<endl;//no of ways
    printPath(1,1,3,3,"");
    cout<<maze2(3,3);

}