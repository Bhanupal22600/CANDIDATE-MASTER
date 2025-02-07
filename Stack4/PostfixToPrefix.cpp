#include <iostream>
#include<stack>
using namespace std;
string solve(string val1, string val2, int ch)
{
    string s ="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;

}
int main()
{
    string s = "79+4*8/3-"; // infix expression
    // we need two stacks, 1 for vals, 1 for ops
    stack<string> val;
    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(to_string(s[i] - 48));
        }
        else
        { // s[i] it is -> *, / , + , -
           //kaam
           string val2 = val.top();
           val.pop();
           string val1= val.top();
           val.pop();
           string ans = solve(val1,val2,s[i]);
           val.push(ans);
        }
    }
    // the operator stack can have values
    // so make it empty
   
    cout<<val.top()<<endl;
    cout<<"7+9*4/8-3";
   
}
// this is same as infixtoprefix bas inside solve fun push_back baad m kra hai