#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> orig, gridw;
vector<pair<int,int>> originals;

bool in_bounds(int r,int c){ return r>=0 && c>=0 && r<n && c<n; }

bool makesTripleAt(int r,int c){
    for(int j=max(0,c-2); j<=min(n-3,c); ++j)
        if(gridw[r][j]=='#' && gridw[r][j+1]=='#' && gridw[r][j+2]=='#')
            return true;
    for(int i=max(0,r-2); i<=min(n-3,r); ++i)
        if(gridw[i][c]=='#' && gridw[i+1][c]=='#' && gridw[i+2][c]=='#')
            return true;
    return false;
}

bool allOriginalsConnected(){
    if(originals.empty()) return true;
    vector<vector<int>> vis(n, vector<int>(n,0));
    queue<pair<int,int>> q;
    q.push(originals[0]);
    vis[originals[0].first][originals[0].second]=1;
    int reached=0;
    while(!q.empty()){
        pair<int,int> p = q.front(); q.pop();
        int r = p.first, c = p.second;
        if(orig[r][c]=='#') reached++;
        int dr[4]={1,-1,0,0};
        int dc[4]={0,0,1,-1};
        for(int d=0;d<4;d++){
            int nr=r+dr[d], nc=c+dc[d];
            if(!in_bounds(nr,nc)) continue;
            if(vis[nr][nc]) continue;
            if(gridw[nr][nc]!='#') continue;
            vis[nr][nc]=1;
            q.push(make_pair(nr,nc));
        }
    }
    int total=0;
    for(size_t i=0;i<originals.size();i++)
        if(orig[originals[i].first][originals[i].second]=='#') total++;
    return reached==total;
}

bool dfs_paint(int r,int c){
    if(allOriginalsConnected()) return true;
    if(r==n-1) return false;
    int dr[3]={1,1,1};
    int dc[3]={-1,0,1};
    for(int d=0; d<3; ++d){
        int nr=r+dr[d], nc=c+dc[d];
        if(!in_bounds(nr,nc)) continue;
        if(orig[nr][nc]=='#'){
            if(dfs_paint(nr,nc)) return true;
            continue;
        }
        if(gridw[nr][nc]=='.'){
            gridw[nr][nc]='#';
            if(makesTripleAt(nr,nc)){
                gridw[nr][nc]='.';
                continue;
            }
            if(dfs_paint(nr,nc)) return true;
            gridw[nr][nc]='.';
        }
        else if(gridw[nr][nc]=='#'){
            if(dfs_paint(nr,nc)) return true;
        }
    }
    return false;
}

bool solve_case(){
    cin>>n;
    orig.assign(n,"");
    for(int i=0;i<n;i++) cin>>orig[i];
    gridw=orig;

    originals.clear();
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(orig[i][j]=='#') originals.push_back(make_pair(i,j));

    if(originals.empty()) return true;

    for(int i=0;i<n;i++){
        for(int j=0;j+2<n;j++){
            if(orig[i][j]=='#' && orig[i][j+1]=='#' && orig[i][j+2]=='#') return false;
            if(orig[j][i]=='#' && orig[j+1][i]=='#' && orig[j+2][i]=='#') return false;
        }
    }

    int topRow=n;
    for(size_t i=0;i<originals.size();i++)
        topRow=min(topRow, originals[i].first);

    // ✅ Try from every original '#' in the topmost row
    vector<int> startCols;
    for(size_t i=0;i<originals.size();i++)
        if(originals[i].first==topRow)
            startCols.push_back(originals[i].second);

    for(size_t i=0;i<startCols.size();i++){
        gridw=orig; // reset each try
        if(dfs_paint(topRow,startCols[i]))
            return true;
    }

    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        cout<<(solve_case()? "YES\n":"NO\n");
    }
    return 0;
}
