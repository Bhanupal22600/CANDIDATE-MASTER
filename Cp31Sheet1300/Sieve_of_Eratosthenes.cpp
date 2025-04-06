#include <bits/stdc++.h>
using namespace std;
 
const int MX = 1.01e7;
 
bitset<MX> is_prime;
vector<int> pr;

//sieve algo
void init() {
    is_prime.set(); // set all bits to 1 (i.e., assume all are prime)
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MX; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MX; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i < MX; ++i) {
        if (is_prime[i]) pr.push_back(i);
    }
}
 
void solve(){
	int N;
	cin >> N;
	int64_t ans = 0;
	for(int p : pr){
		if(p > N) break;
		ans += N / p;
	}
	cout << ans << '\n';
}
 
int main(){
	
	init();
	int T;
	cin >> T;
	while(T--) solve();
}