int c=0;
for(int i=1;i<=n;i*=k){
    c++;
}
// eg n=100 ,k=2
//i=1,2,2^2,2^3,2^4,2^5,2^6,2^7
//64<100 
//means iteration 7 hue
//T.c=O(7)
// for generise say T.c=O(x)



//i=1,k,k^2,k^3,k^4,..,k^x
//T.c=O(x) ....1
// this loop will end when k^x>n
//k^x=n
//xlogk=logn taking log b.s
//x=logn/logk
//x=logkN
//put in 1
// O(x)=O(logn) k << n

// O(logn)<n<n^2<n^3 for (n>1) time complex