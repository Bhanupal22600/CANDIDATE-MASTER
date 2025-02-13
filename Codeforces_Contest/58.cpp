#include<iostream>
#include<cmath>
using namespace std;
void calc() {
    int N;
    long long C;
    cin >> N >> C;
    long long sum_s = 0, sum_s2 = 0;
    for (int i = 0; i < N; i++) {
        long long s;
        cin >> s;
        sum_s += s;
        sum_s2 += s * s;
    }
    long long goal = (C - sum_s2) / 4;
    long long low = 0, high = long(sqrt(goal / N)) + 1;
    while (low < high) {
        long long mid = low + (high - low) / 2;
 
        if (mid * sum_s + mid * mid * N < goal)
            low = mid + 1;
        else
            high = mid;
    }
    cout << low << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t-->0)
        calc();
}