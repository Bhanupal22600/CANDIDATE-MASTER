int c=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<m;j++){
        c++;
    }
}
total no of iterations : (m-1)+(m-2)+(m-3)..+[m-(n+1)] ~ let N=n terms ha is A.P m 
Sum=N[a+L]/2=N[m-1+m-n-1]/2 
S=N[a+L]=n[m-1+m-n-1]/2
S=O(n[2m-n-2]/2)
S=O([n*m-n^2-2*n])
T.c=O(n*m)  as m>n hai logically when we look at loops
# here i put S =T.C as S will gives us totoal no of iterations which is know as T.C 