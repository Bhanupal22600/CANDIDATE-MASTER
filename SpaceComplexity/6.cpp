int a[n][n/2];
for(int i=1;i<n;i*=2){// es upper loop ki T.C=logn/log2=log2n # 2 chota hai 
    for(int j=0;j<n/2;j++){// T.C =n/2
        a[i][j]++;
    }
}
//S.C=O(n^2/2)~O(n^2)
// for T.C dono loop ki time complexity nikalkr bas multiply krdo
//T.C= n/2*log2n=O(nlogn)
