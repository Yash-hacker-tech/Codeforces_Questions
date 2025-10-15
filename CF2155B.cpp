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
#define int_1(n) int n; cin >> n;
#define ll_2(a, b) ll a, b; cin >> a >> b;


using namespace std;

bool isValidTriangle(ll a, ll b, ll c) 
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}


void solve() 
{
    ll_2(n, k);
    ll width = 1, height = 1;
    bool check = false;
    if(k%n == n-1)
    {
        check = true;
    }
    if(n*n - 1 == k)
    {
        cout << "NO\n";
        return;
    }
    else 
    {
        cout << "YES\n";
        while(height <= n)
        {
            if(k > 0)
            {
                cout << "U";
                k--;
                width++;
                if(width > n)
                {
                    width = 1;
                    height++;
                    cout << "\n";
                }
            }
            else 
            {
                if(check)
                {
                    cout << "D\n";
                    check = false;
                    width = 1;
                    height++;
                }
                else
                {
                    cout << "R";
                    width++;
                    if(width > n-1)
                    {
                        width = 1;
                        height++;
                        cout << "L\n";
                    }
                }
            }
        }
    }
}

int main()
{
    fast;
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}
