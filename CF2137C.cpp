#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vpii vector<pair<int, int>>
#define umii unordered_map<int, int>
#define r(i, s, e) for (ll i = s; i < e; i++)
#define r0(i, e, s) for (ll i = e; i >= s; i--)
#define maxInVec(v) *max_element(v.begin(), v.end())
#define minInVec(v) *min_element(v.begin(), v.end())
#define maxIdxInVec(v) max_element(v.begin(), v.end()) - v.begin()
#define minIdxInVec(v) min_element(v.begin(), v.end()) - v.begin()
#define MOD 100000007

using namespace std;

void solve() 
{
    ll a, b; 
    cin >> a >> b;

    if ((a & 1) && (b & 1)) 
    {
        ll prod = (ll)a * b;
        cout << (ll)(prod + 1) << "\n";
        return;
    }

    if ((b & 1) == 0) 
    {
        int tz = __builtin_ctzll(b);
        if ((a & 1) && tz == 1) 
        {
            cout << -1 << "\n";
        } 
        else 
        {
            ll k = b >> 1;
            ll sum = (ll)a * k + 2;
            cout << (ll)sum << "\n";
        }
        return; 
    }

    cout << -1 << "\n";
}

int main() 
{
    fast;
    ll t; cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
