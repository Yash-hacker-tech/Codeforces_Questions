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
    ll n, k, _1s = 0, _0s = 0, _2s = 0; cin >> n >> k;
    string s, ans = ""; cin >> s;
    if(n == k)
    {
        r(i, 0, n)
        {
            ans += "-";
        }
        cout << ans << "\n";
        return;
    }
    r(i, 0, k)
    {
        if(s[i] == '2') _2s ++;
        else if(s[i] == '1') _1s ++;
        else _0s ++;
    }
    if(n - (k + _2s) <= 0)
    {
        ans = string(_0s, '-') + string(n - (_1s + _0s), '?') + string(_1s, '-');
    }
    else
    {
        ans = string(_0s, '-') + string(_2s, '?') + string(n - (k + _2s), '+') + string(_2s, '?') + string(_1s, '-');
    }
    
    cout << ans << "\n";
    return;
}

int main()
{
    fast;
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}
