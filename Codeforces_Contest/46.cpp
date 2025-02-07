#include <iostream>
#include <vector>
using namespace std;
void calc()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int check=1;
    if(n==k){
        for(int i=0;i<n;i++){
            if(i%2!=0){
                if(v[i]==check){
                    check++;
                }
                else{
                    cout<<check<<endl;
                    return;
                }
            }
        }
        cout<<check<<endl;
        return;
    }
    else{
        int gap=n-k+1;
        for(int i=1;i<=gap;i++){
            if(v[i]==check) continue;
            else{
                cout<<1<<endl;
                return;
            }
        }
        cout<<2<<endl;
        return;
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        calc();
    }
}