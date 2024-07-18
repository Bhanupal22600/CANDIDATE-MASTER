int c=0;
for(int i=1;i<n;i+=i){
    c++;
}
i=1,2,4,8,16,..., uptu n 
i=1,2,2^2,2^3,2^4,...2^x
2^x<n
logn/log2=x
T.C=O(logn) as log(k.logn) ~ O(logn)


// QUES-2

int c=0;
for(int i=1;i<n;i+=i){
    for(int j=0;j<i;j++){
        c++;
    }
}
i=1, j=0;
i=2, j=0,1;
i=4, j=0,1,2,3
i=8, j=0,1,2,3,4,5,6,7
.
.
.
i=n , j=0,1,...uptu n
M-1
so 
total no of iterations=1+2+2^2+2^3+2^4 ... 2^x
S of G.P= a[(r^n)-1]/r-1
S=2^(x+1)-1
T.C=O(2.2^x)
T.C=O(2^x)
T.C=O(n)

M-2 
i=1,2,4,8,16,..., uptu n 
1,2,4,8,16,....,n/2,n
1+1+2+4+8+16+...+n/2+n+-1
2+2+4+8+16 ... n/2 + n-1
4+4+8+16 ... n/2 +n -1
=2n-1
T.C = O(2n-1)
T.C=O(n)



//QUES-3


int c=0;
for(int i=1;i*i<n;i+=i){//for(int i=1;i<n^(1/2);i+=i) ye yehi likha hai
    for(int j=0;j<i;j++){
        c++;
    }
}

now as previously we do 

i=1,2,4,8,16,....2^x
but here 2^x=n^(1/2)
total iteration is 1+2+4+8+16,....+2^x
S=2^(x+1) -1 
T.C=O(2^x) 
T.C=O(n^(1/2))


//Ques-4


int c=0;
for(int i=1;i*i<n;i+=i){//i+=i is i*=2
    for(int j=n;j>i;j++){
        c++;
    }
}

i=1,2,4,8,...,2^x
2^x=n^(1/2)
i=1, j=n,n-1,...3,2 : n-1
i=2, j=n,n-1,...4,3 : n-2
i=4, j=n,n-1,...6,5 : n-4
.                   : n-8
.
.
i=n^(1/2)           : n-n^(1/2)

total no of iteration = (n-1) + (n-2) + (n-4) + (n-8) + (n-16) + .. (n-2^x)
=(n+n+n+...)-(1+2+4+8+...2^x)
= n(x+1) - [2^(x+1)-1] = n.x + n -2.2^x +1
T.C = O(n.log2n^(1/2)+n-n^(1/2))
T.C=O(n.logn^(1/2))
T.C=O(nlogn)


