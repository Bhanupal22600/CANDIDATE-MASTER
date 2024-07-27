// a man can stairs at a time 1 stairs or 2 stairs calc no of ways to go to top stairs
#include<iostream>
using namespace std;
int stair(int n){
    if(n==2) return 2; //as agar 2 stair bache hai toh ya toh wo 1 stair then 1 stair chedega or ya fir ek hi bari m 2 so no of ways is 2;
    if(n==1) return 1;
    return stair(n-1)+stair(n-2);
}
int main(){
    cout<<stair(5);// 0 stair pr khada hai men and 5 stairs chdne k kitne ways hai
    
}
/* 1 2 3 5 8 ...
fibo jasi hi series ban rhi but 1 nhi hai
stair(5)=8 ways
1 1 1 1 1
1 1 1 2
1 1 2 1
1 2 1 1
1 2 2
2 1 1 1
2 1 2
2 2 1*/ 