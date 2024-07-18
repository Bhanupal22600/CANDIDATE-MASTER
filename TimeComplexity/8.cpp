int c=0;
for(int i=2;i<n;i*=i){
    c++;
}
i=2,4,16,256,...
i=2^1,2^2,2^4,2^8,2^16,2^32,..
i=2^1,2^(2^1),2^(2^2),2^(2^3),2^(2^4),2^(2^5),2^(2^6),...2^(2^x)
// so here no of terms or iterations is x+1
T.C=O(x)
here 2^(2^x)=n
2^t=n[t=2^x]
taking log b.s
logn=t
logn=2^x
taking log b.s
log(logn)=xlog2 (log2 =constant ,dont consider in T.C)

T.C=O(log(logn))




//QUES-2



int c=0;
for(int i=2;i<n;i*=i){
    c++;
}
i=2,4,16,256,...
i=2^1,2^2,2^4,2^8,2^16,2^32,..
i=2^1,2^(2^1),2^(2^2),2^(2^3),2^(2^4),2^(2^5),2^(2^6),...2^(2^x)
//similar as above but here 2^(2^x)=n^(1/2)
so,
T.C=log(logn^(1/2))
T.C=log(logn)   [:(logx^n)=nlogx]
