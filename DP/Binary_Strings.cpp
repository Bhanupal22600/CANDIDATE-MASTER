// Given a no n, count the no of binary strings of length n, without consecutive ones.


// intuition - here we can see that after some rough work on n=1,2,3,4 we get ans 2 as 0,1 fr n=1 similarly
// n=2 we get ans as 3 00,01,10 and n=3 we get ans as 5 000,001,010,101,100 we notices a pattern as 2,3,5,8 ... hence finonacchi is detected ques is solved here only
// if time persist then after more analysis we can think of like for n=2 we have 0 ,1 only and fr n=2 we put 0 or 1 after seeing 
//n=1 all string if last digit is 0 then we can put 0 and 1 both one by one but if last digit is 1 then we only put 0 to get n=2 string 
//as if we put 1 here then last digit is alredy 1 and we get 11 which is invalid two consecutive 1 so n=2 has 00,01,10,11(invalid)
//sim, fr n=3 we find n=2 valid string as 00,01,10 we put 1 and 0 fr last digit if 0 and 0 only if last digit is 1 hence 000,001,010,100,101





// more optimised dp version using only three variables
#include<iostream>
using namespace std;

int calc(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    
    int a = 2, b = 3, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    
    return b;
}

int main() {
    int n;
    cin >> n;
    cout << calc(n);
    return 0;
}

//optimised recursion code using dp
/*
#include<iostream>
using namespace std;

int calc(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    
    int dp[n + 1];
    dp[1] = 2;
    dp[2] = 3;
    
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << calc(n);
    return 0;
}
*/




// basic recursion code
/*
#include<iostream>
using namespace std;

int calc(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    return calc(n - 1) + calc(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << calc(n);
    return 0;
}
*/

// use fibonacchi where f(n)=f(n-1)+f(n-2);
// but here base case is if f(1)= 2(as n=1 has only 2 string )   and f(2)=3 (n=2 has 00,01,10)