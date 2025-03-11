#include<iostream>
#include<vector>
using namespace std;

int f(int n){
    // using only two variable
    int a=0;
    int b=1;
    if(n==0 or n==1) return n;
    int c;
    int i=2;
    while(i<=n){
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}

//bottom up -> iterative and hme order of preparation of subproblem figure out krni hoti hai
//T.C=O(n),S.C=O(1)

// greedy algo is focus on local optimal whereas dp focus on minm cost from local minm to end on brute force soln