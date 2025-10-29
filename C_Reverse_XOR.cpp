#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int a) { cerr << a; }
void _print(long long a) { cerr << a; }
void _print(char a) { cerr << a; }
void _print(string a) { cerr << a; }
void _print(bool a) { cerr << (a ? "true" : "false"); }

template<typename T, typename U>
void _print(pair<T, U> p) {
    cerr << "{";
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << "}";
}

template<typename T>
void _print(vector<T> v) {
    cerr << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        _print(v[i]);
        if (i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}
bool isPalindrome(const string &s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
string decimal_to_binary(int num){
    if(num==0) return "0";
    string result="";
    while(num>0){
        if(num%2==0){
            //even
            result = "0"+ result;
        }
        else{
            result="1" + result;
        }
        num=num/2;
    }
    return result;
}
void calc() {
    int n;
    cin >> n;
    if(n==1 || n==2) {
        cout<<"NO"<<endl;
        return;
    }
    string s =decimal_to_binary(n);

    if (s.size()%2==1 &&  s[s.size()/2]!='1' && isPalindrome(s)  ) {
        cout << "YES\n";
        return;
    }
    else if(isPalindrome(s) && s.size()%2==0){
        cout<<"YES"<<endl;
        return;
    }

    string t = s;
    for(int i = 0; i < 31; i++) {
        t = '0' + t;
        s = t;
        if (s.size()%2==1 &&  s[s.size()/2]!='1' && isPalindrome(s)  ) {
            cout << "YES\n";
            return;
        }
        else if(isPalindrome(s) && s.size()%2==0){
            cout<<"YES"<<endl;
            return;
        }
        else if (isPalindrome(s) ){
            cout << "YES\n";
            return;
        }
    }
    
    cout<<"NO"<<endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
