#include <bits/stdc++.h>
using namespace std;

/* ll l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    if (l1 == (l2 + l3))
    {
        if (b2 == b3)
        {
            if (l1 == (b2 + b1))
            {
                cout << "YES" << nl;
                return;
            }
        }
    }
    if (l1 == l2 && l2 == l3)
    {
        if (l1 == (b2 + b1 + b3))
        {
            cout << "YES" << nl;
            return;
        }
    }
    if (b1 == (b2 + b3))
    {
        if (l2 == l3)
        {
            if (b1 == (l1 + l3))
            {
                cout << "YES" << nl;
                return;
            }
        }
    }
 
    if (b1 == b2 && b2 == b3)
    {
        if (b1 == (l2 + l1 + l3))
        {
            cout << "YES" << nl;
            return;
        }
    }
    cout << "NO" << nl;*/
void calc() {
    int l1,l2,l3;
    int b1,b2,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    if(b1==b2 && b2==b3 && l1+l2+l3==b1){
        cout<<"YES"<<endl;
        return;
    }
    if(l1==l2){
        if(l2!=l3 ){
            if(l1+l2+l3==b1 && b1==b2 && b2==b3)
            {
                cout<<"YES"<<endl;
                return;
            }
            else if(l1==l2+l3 && b2==b3 && b1+b2==l1){
                cout<<"YES"<<endl;
            }
            
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else {
            if((b1+b2+b3)==l1){
                cout<<"YES"<<endl;
                return;
            }
            if(b1==b2+b3 && l1+l2==b1){
                cout<<"YES"<<endl;
                return;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    else{
            if(l2!=l3){
                if(l1+l2+l3==b1 && b1==b2 && b2==b3){
                     cout<<"YES"<<endl;
                    return;
                }
                else if(l1==l2+l3 && b2==b3 && l1==b2+b1){
                    cout<<"YES"<<endl;
                    return;
                }
                cout<<"NO"<<endl;
                return ;
            }
            else{
                if(l1==l2+l3 && b2==b3 && l1==b2+b1){
                    cout<<"YES"<<endl;
                    return;
                }
                else if(b1==b2+b3 && b1==l1+l2  ){
                    cout<<"YES"<<endl;
                    return;
                }
                else{
                    cout<<"NO"<<endl;
                    return ;
                }
            }
        
    }

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}