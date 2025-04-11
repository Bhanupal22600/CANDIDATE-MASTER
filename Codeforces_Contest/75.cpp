// Libraries
#include <bits/stdc++.h>
#include <cstdio>
#include <math.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

// Definitions
#define MAX LLONG_MAX
#define MOD 1000000007
#define int long long
#define uint unsigned int
#define fi first
#define se second
#define mp make_pair
#define pii pair<int, int>
#define pb push_back
#define pf push_front
#define all(arr) arr.begin(), arr.end()
#define revall(arr) arr.rbegin(), arr.rend()
#define n(arr, a, b)                \
	for (int i = (a); i < (b); i++) \
		cin >> arr[i];
#define pv(n)             \
	for (auto i : n)      \
		cout << i << ' '; \
	cout << endl;
#define vini(n, y)              \
	for (int i = 0; i < y; i++) \
		cin >> n[i];
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define ll long long
inline ll ceil(ll n, ll y) { return (n >= 0 ? (n + y - 1) / y : n / y); }

// Short Forms
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef pair<pii, int> ppi;
typedef vector<pii> vpi;
typedef vector<ppi> vppi;
typedef map<int, int> mii;
typedef map<int, vi> mvi;
typedef map<pii, int> mpi;
typedef priority_queue<ppi, vppi, greater<ppi>> min_heap_ppi; // max heap
typedef priority_queue<ppi> max_heap_ppi;					  // min heap

// Loops
#define For(i, n) for (int i = 0; i < (int)n; i++)
#define Rev(i, n) for (int i = n - 1; i >= 0; i--)
#define tern(a, b, c) (!!(a)) * b + (!(a)) * c
#define cross(i, a, b) ((tern(b > a, 1, -1)) * (i)) >= ((tern(b > a, 1, -1)) * (b))
#define loop(i, a, b) for (int i = a; i != b; i += tern(b > a, 1, -1))
#define sloop(i, a, b, n) for (int i = a; (!(cross(i, a, b))); i += n)
#define inrange(i, a, b) ((i >= min(a, b)) && (i <= max(a, b)))
#define F first
#define S second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair

// Printers
#define p0(n) cout << (n) << " "
#define p1(n) cout << (n) << endl
#define p2(n, y) cout << (n) << " " << (y) << endl
#define p3(n, y, z) cout << (n) << " " << (y) << " " << (z) << endl
#define p4(a, b, c, d) cout << (a) << " " << (b) << " " << (c) << " " << (d) << endl
#define p5(a, b, c, d, e) cout << (a) << " " << (b) << " " << (c) << " " << (d) << " " << (e) << endl
#define p6(a, b, c, d, e, f) cout << (a) << " " << (b) << " " << (c) << " " << (d) << " " << (e) << " " << (f) << endl
#define fio                           \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)

// pairs
using db = long double;
using str = string; // yay python!
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;

// vectors
// oops size(n), rbegin(n), rend(n) need C++17
#define sz(n) int((n).size())
#define bg(n) begin(n)
#define sor(n) sort(all(n))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

#define lb lower_bound
#define ub upper_bound

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, n) for (auto &a : n)

// const int MOD = 998244353;
const int MX = (int)2e5 + 5;
const ll BIG = 1e18; // not too close to LLONG_MAX
const ll mod97 = 1e9 + 7;
const db PI = acos((db)-1);
template <class T>
using pqg = priority_queue<T, vector<T>, greater<T>>;
template <typename T, typename U>
auto min(const T &a, const U &b) -> decltype(a < b ? a : b)
{
	return (a < b) ? a : b;
}
// divide a by b rounded up
ll cdiv(ll a, ll b)
{
	return a / b + ((a ^ b) > 0 && a % b);
}

ll floor_div(ll n, ll y)
{
	assert(y != 0);
	if (y < 0)
	{
		y = -y;
		n = -n;
	}
	if (n >= 0)
		return n / y;
	return (n + 1) / y - 1;
}
ll ceil_div(ll n, ll y)
{
	assert(y != 0);
	if (y < 0)
	{
		y = -y;
		n = -n;
	}
	if (n <= 0)
		return n / y;
	return (n - 1) / y + 1;
}

inline int largestpoweruptoA(ll A)
{
	int n{0};
	while ((1LL << n) <= A)
	{
		n++;
	}
	return n - 1;
}

ll fdiv(ll a, ll b)
{
	return a / b - ((a ^ b) < 0 && a % b);
}

#define dp1d (i, j) vector<int> dp1d(i, j);
#define dp2d (i, j) vector<vector<int>> dp2d(i, vector<int>(i, j));

long long Hcf(long long a, long long b)
{
	while (b != 0)
	{
		a = a % b;
		std::swap(a, b);
	}
	return a;
}

long long Lcm(long long a, long long b)
{
	return (a / Hcf(a, b)) * b;
}

const int dx8[8] = {1, 0, -1, 0, -1, -1, 1, 1};
const int dy8[8] = {0, 1, 0, -1, -1, 1, -1, 1};
// (1, 0)   : Move down
// (0, 1)   : Move right
// (-1, 0)  : Move up
// (0, -1)  : Move left
// (-1, -1) : Move diagonally top-left
// (-1, 1)  : Move diagonally top-right
// (1, -1)  : Move diagonally bottom-left
// (1, 1)   : Move diagonally bottom-right

const int dx4[4]{1, 0, -1, 0};
const int dy4[4]{0, 1, 0, -1};
// (1, 0): Move down
// (0, 1): Move right
// (-1, 0): Move up
// (0, -1): Move left

//(^///^)(^///^)(^///^)(^///^)(^///^)(^///^)(^///^)(^///^)(^///^)(^///^)(^///^)(^///^)
bool isprime(ll n)
{
	if (n < 2)
		return false;
	for (ll i = 2; pow(i,2) <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
void solve()
{
	ll n, k;
	cin >> n >> k;
	if (k == 1)
	{
		cout << (isprime(n) ? "YES" : "NO") << endl;
	}
	else
	{
		cout << ((n == 1 && k == 2) ? "YES" : "NO") << endl; // 11 is the only case
	}
}

signed main()
{
	fio;
	int TC = 1;
	cin >> TC;
	while (TC--)
	{
		solve();
	}
	return 0;
}
