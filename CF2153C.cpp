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
#define umll unordered_map<long long, long long>
#define r(i, s, e) for (int i = s; i < e; i++)
#define r0(i, e, s) for(int i = e; i >= s; i--)
#define maxInVec(v) *max_element(v.begin(), v.end())
#define minInVec(v) *min_element(v.begin(), v.end())
#define maxIdxInVec(v) max_element(v.begin(), v.end()) - v.begin()
#define minIdxInVec(v) min_element(v.begin(), v.end()) - v.begin()
#define MOD 100000007

using namespace std;

bool isValidTriangle(ll a, ll b, ll c) 
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}


void solve() 
{
    int n;
    cin >> n;

    vi a(n);
    r(i, 0, n) cin >> a[i];

    ll sum = 0;
    sort(a.begin(), a.end());

    vi b = {0};
    int cnt = 0;

    for (int l = 0, r = 0; l < n; l = r) {
        while (r < n && a[l] == a[r]) r++;
        sum += (ll)((r - l) / 2) * 2 * a[l];
        cnt += ((r - l) / 2) * 2;
        if ((r - l) % 2) b.push_back(a[l]);
    }   

    ll ans = 0;
    r(i, 1, (int)b.size()) {
        if (sum + b[i - 1] > b[i])
            ans = max(ans, (ll)b[i - 1] + b[i]);
    }

    if (cnt > 2 || ans > 0)
        ans += sum;

    cout << ans << "\n";
}

int main()
{
    fast;
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}
