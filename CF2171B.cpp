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


void solve() 
{
    ll_1(n);
    vi v(n);
    r(i, 0, n)
    {
        cin >> v[i];
    }
    if(v[0] == -1 || v[n-1] == -1) cout << 0 << endl;
    else cout << abs(v[n-1] - v[0]) <<"\n";
    
    if(v[0] == -1 && v[n-1] == -1) cout << 0 << " ";
    else if(v[0] == -1) cout << v[n-1] << " ";
    else cout << v[0] << " ";
    r(i, 1, n-1)
    {
        cout << (v[i] == -1 ? 0 : v[i]) << " ";
    }
    if(v[0] == -1 && v[n-1] == -1) cout << 0 << "\n";
    else if(v[n-1] == -1) cout << v[0] << "\n";
    else cout << v[n-1] << "\n";
}

int main()
{
    fast;
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}
