#include <bits/stdc++.h>
using namespace std;

void calc()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int cn = 0;
    int k = 0;
    while (cn < n)
    {
        for (int i = 0; i < 6; i++)
        {
            if (i % 2 == 0)
            {
                cout << v[k] << " ";
            }
            else
            {
                cout << v[m - 1 - k] << " ";
            }
        }
        cn++;
        cout << endl;
        if (cn < n)
        {
            for (int i = 0; i < 6; i++)
            {
                if (i % 2 == 0)
                {
                    cout << v[m - 1 - k] << " ";
                }
                else
                {

                    cout << v[k] << " ";
                }
            }
            cn++;
            cout << endl;
        }
        k++;
    }
    return;
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