#include <bits/stdc++.h>
using namespace std;

void calc()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0;
    int j = n - 1;
    int f = 0;
    int l = 0;
    while (i < j)
    {
        if (v[i] != v[j])
        {
            f = v[i];
            l = v[j];
            break;
        }
        i++;
        j--;
    }

    if (f == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        int flag1 = 1;
        vector<int> u;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != f)
            {
                u.push_back(v[i]);
            }
        }
        if (u.size() > 0)
        {
            int i = 0;
            int j = u.size() - 1;
            while (i < j)
            {
                if (u[i] != u[j])
                {
                    flag1 = 0;
                    break;
                }
                i++;
                j--;
            }
        }
        else{
             cout<<"YES"<<endl;
             return;
        }



        int flag2 = 1;
        vector<int> w;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != l)
            {
                w.push_back(v[i]);
            }
        }
        if (w.size() > 0)
        {
            int i = 0;
            int j = w.size() - 1;
            while (i < j)
            {
                if (w[i] != w[j])
                {
                    flag2 = 0;
                    break;
                }
                i++;
                j--;
            }
        }
        else{
            cout<<"YES"<<endl;
            return;
        }


        if(flag1 || flag2){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
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
    return 0;
}