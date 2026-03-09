#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vpii vector<pair<int, int>>
#define umii unordered_map<int, int>
#define umll unordered_map<long long, long long>
#define r(i, s, e) for (int i = s; i < e; i++)
#define r0(i, e, s) for(int i = e; i >= s; i--)
#define maxInVec(v) *max_element(v.begin(), v.end())
#define minInVec(v) *min_element(v.begin(), v.end())
#define maxIdxInVec(v) max_element(v.begin(), v.end()) - v.begin()
#define minIdxInVec(v) min_element(v.begin(), v.end()) - v.begin()
#define MOD 100000007
#define ll_1(n) ll n; cin >> n;
#define int_1(n) int n; cin >> n;
#define ll_2(a, b) ll a, b; cin >> a >> b;
#define vec_ll(v, n) vll v(n); r(i, 0, n) cin >> v[i];
#define str_1(s) string s; cin >> s;

using namespace std;

bool isValidTriangle(ll a, ll b, ll c) 
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool isPrime(ll n) 
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (ll i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int ithBit(int n, int i) 
{
    return (n >> i) & 1;
}

long long xor_upto(long long n) 
{
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}



void solve()
{
    int n, k;
    cin >> n >> k;

    vi a(n);
    r(i, 0, n) cin >> a[i];

    int ans = INT_MAX;

    r(i, 0, n)
    {
        int rem = a[i] % k;
        if (rem == 0) ans = 0;
        else ans = min(ans, k - rem);
    }

    if (k == 4)
    {
        int cnt_even = 0;
        for (int x : a) if (x % 2 == 0) cnt_even++;
        if (cnt_even >= 2) ans = 0;
        else ans = min(ans, 2 - cnt_even);
    }

    cout << ans << '\n';
}


int main()
{
    fast;
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}
