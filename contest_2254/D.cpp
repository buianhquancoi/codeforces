#include <bits/stdc++.h>
#define file(f)                         \
    if (fopen((f ".inp"), "r"))         \
    {                                   \
        freopen(f ".inp", "r", stdin);  \
        freopen(f ".out", "w", stdout); \
    }
#define f(a, b, c) for (ll a = b; a <= c; a++)
#define all(x) x.begin(), x.end()
#define ll long long
#define dou double
#define endl '\n'
#define pb(x) push_back(x)
using namespace std;
const int maxn = 1e6 + 5;
const int mod = 1e9 + 7;
const ll inf = 1e18 + 7;
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
void boost()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
ll n, k, a[maxn], t, x, y;
string s;
void sol()
{
    map<ll, ll> mp, res;
    cin >> n;
    f(i, 1, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    if ((*mp.begin()).first != 0)
    {
        cout << -1 << endl;
        return;
    }
    ll Min = 0;
    for (auto it = ++mp.begin(); it != mp.end(); ++it)
    {
        auto last = prev(it);
        if (((*it).first - (*last).first) % ((*last).second) != 0 || ((*it).first - (*last).first) / ((*last).second) <= Min)
        {
            cout << -1 << endl;
            return;
        }
        res[(*last).first] = ((*it).first - (*last).first) / ((*last).second);
        Min = ((*it).first - (*last).first) / ((*last).second);
    }
    auto it = prev(mp.end(), 2);
    res[(*mp.rbegin()).first] = res[((*it).first)] + 1;
    f(i, 1, n)
    {
        cout << res[a[i]] << " ";
    }
    cout << endl;
}
int main()
{
    file("test");
    boost();
    cin >> t;
    while (t--)
    {
        sol();
    }
    cerr << "\nTime:" << TIME << "s.";
    return 0;
}