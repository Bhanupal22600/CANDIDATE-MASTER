#include <bits/stdc++.h>
#include <vector>
using namespace std;
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        
    int n=mat.size();
    int m=mat[0].size();
    int k=n*m;
    vector<int> v(k,0);
    int count=0;
    int minr=0;
    int minc=0;
    int maxr=n-1;
    int maxc=m-1;
    while(count!=k){
        for(int i=minc;i<maxc && count < k;i++){
            v[count]=mat[minr][i];
            count++;
        }
        minr++;
        for(int i=minr;i<maxr && count < k;i++ ){
           v[count]=mat[i][maxc];
            count++;
        }
        maxc--;
        for(int i=maxc;i>=minc && count < k;i--){
            v[count]=mat[maxr][i];
            count++;
        }
        maxr--;
        for(int i=maxr;maxr>=minr && count < k;i-- ){
           v[count]=mat[i][maxc];
            count++;
        }
        minc++;
        
    }
    return v;
    
    }
// } Driver Code Ends
int main() {
    // Hardcoded matrix
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    vector<int> result = spirallyTraverse(mat);

    // Print the result
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}