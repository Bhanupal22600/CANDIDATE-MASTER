#include <iostream>
#include<stack>
using namespace std;
int solve(int val1, int val2, int ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}
int main()
{
    string s = "-/*+79483"; // prefix expression
    // we need two stacks, 1 for vals, 1 for ops
    stack<int> val;
    for (int i = s.length()-1; i >=0; i--)
    {
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(s[i] - 48);
        }
        else
        { // s[i] it is -> *, / , + , -
           //kaam
           int val1 = val.top();
           val.pop();
           int val2= val.top();
           val.pop();
           int ans = solve(val1,val2,s[i]);
           val.push(ans);
        }
    }
    // the operator stack can have values
    // so make it empty
   
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3;
   
}
// this is same as infixtoprefix bas inside solve fun push_back baad m kra hai