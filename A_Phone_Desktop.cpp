#include <bits/stdc++.h>
using namespace std;
void calc() {
    int X, Y;
    cin >> X >> Y;
    int need = (Y + 1) / 2;
 
    while (15 * need < X + 4 * Y)
        need++;
 
    cout << need << '\n';
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}