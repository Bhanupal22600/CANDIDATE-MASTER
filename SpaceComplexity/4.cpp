int a[n];
int b[m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        a[i]=i;
        b[j]=j;
    }
}
//here T.C=O(m*n)
//but S.C=O(m+n) becaue iteration toh m*n hai pr
// space m+n hi use ho rha hai check krle and also here 
// we cant change array size once declare

vector<int> a(n);
vector<int> b(m);
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        a[i]=i;
        b[j]=j;
    }
}
//taking vector in place of array does not change S.C as
// inside loop m vector a,b m kuch push back thodi ho rha hai bas loop se same m,n index ki value aa rhi hai
// so T.C=O(m*n)
// S.C=O(m+n)