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
#define ll_1(n) ll n; cin >> n;
#define vec_ll(v, n) vll v(n, 0); r(i, 0, n) cin>>v[i];
 
using namespace std;
 
bool isValidTriangle(ll a, ll b, ll c) 
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}
 
 
void solve() 
{
    ll_1(n);
    vec_ll(v, n);
    cout << maxInVec(v) << "\n";
    return;
}
 
int main()
{
    fast;
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}