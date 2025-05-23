//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string con(string s){
        string t=" ";
        int cn=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) cn++;
            else{
                t=t+to_string(cn);
                t=t+s[i];
                cn=1;
            }
        }
        t=t+to_string(cn);
        t=t+s[s.size()-1];
        
        return t;
    }
    string countAndSay(int n) {
        string s="1";
        for(int i=2;i<=n;i++){
            s=con(s);
        }
        return s;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.countAndSay(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends