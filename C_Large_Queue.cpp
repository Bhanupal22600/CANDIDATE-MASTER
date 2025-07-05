#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n;
    cin >> n;

    queue<pair<long long, long long>> q;

    for (long long i = 0; i < n; i++) {
        long long a;
        cin >> a;

        if (a == 1) {
            long long b, c;
            cin >> b >> c;
            q.push(make_pair(c, b));  // value, count
        } else {
            long long b;
            cin >> b;
            long long ss = 0;

            while (b > 0 && !q.empty()) {
                pair<long long, long long> front = q.front();
                q.pop();

                long long val = front.first;
                long long cnt = front.second;

                long long take = min(cnt, b);
                ss += take * val;
                b -= take;

                if (cnt > take) {
                    q.push(make_pair(val, cnt - take));
                }
            }

            cout << ss << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    calc();
    return 0;
}
