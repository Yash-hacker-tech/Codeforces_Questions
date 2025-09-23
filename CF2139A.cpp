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
    int a, b;
    cin >> a >> b;
    if(a == b) cout << "0\n";
    else if((a%b == 0) || (b%a == 0)) cout << "1\n";
    else cout << "2\n";
    return;
}

int main()
{
    fast;
    ll t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}