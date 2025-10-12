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
#define r(i, s, e) for (int i = s; i < e; i++)
#define r0(i, e, s) for(int i = e; i >= s; i--)
#define maxInVec(v) *max_element(v.begin(), v.end())
#define minInVec(v) *min_element(v.begin(), v.end())
#define maxIdxInVec(v) max_element(v.begin(), v.end()) - v.begin()
#define minIdxInVec(v) min_element(v.begin(), v.end()) - v.begin()
#define MOD 100000007

using namespace std;

void solve() 
{
    ll x, y, z;
    cin >> x >> y >> z;
    while (x > 0 || y > 0 || z > 0) 
    {
        int xb = x & 1, yb = y & 1, zb = z & 1;
        if (!(
                (xb == 0 && yb == 0 && zb == 0) ||
                (xb == 0 && yb == 1 && zb == 0) ||
                (xb == 0 && yb == 0 && zb == 1) ||
                (xb == 1 && yb == 0 && zb == 0) ||
                (xb == 1 && yb == 1 && zb == 1)
            )) 
        {
            cout << "NO\n";
            return;
        }
        x >>= 1; y >>= 1; z >>= 1;
    }
    cout << "YES\n";
    return;
}

int main()
{
    fast;
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}
