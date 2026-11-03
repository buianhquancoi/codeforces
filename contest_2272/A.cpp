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
ll mex(ll a[], ll k)
{
    set<ll> se;
    multiset<ll> res;
    f(i, 0, n)
    {
        se.insert(i);
    }
    f(i, 1, n)
    {
        se.erase(a[i]);
        res.insert(*se.begin());
    }
    auto it = res.end();
    f(i, 1, k)
    {
        it--;
    }
    return *it;
}
void sol()
{
    cin >> n >> k;
    f(i, 1, n)
    {
        cin >> a[i];
    }
    ll res = mex(a, k);
    f(i, 1, n - 1)
    {
        f(j, i + 1, n)
        {
            swap(a[i], a[j]);
            if (mex(a, k) > res)
            {
                x = i;
                y = j;
            }
            res = max(res, mex(a, k));
            swap(a[i], a[j]);
            cerr << i << " " << j << " " << res << endl;
        }
    }
    if (res == mex(a, k))
    {
        cout << -1 << endl;
        return;
    }
    cout << x << " " << y << endl;
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