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
ll n, k, a[maxn], b, c, t, x, y;
string s;
void sol()
{
    cin >> n >> s;
    ll res = 1;
    f(i, 0, s.size() - 2)
    {
        if (s[i] != s[i + 1])
        {
            res++;
        }
    }
    f(i, 1, s.size() - 2)
    {
        if (s[i - 1] == s[i + 1] && s[i - 1] != s[i])
        {
            cout << res - 2 << endl;
            return;
        }
    }
    f(i, 1, s.size() - 2)
    {
        if (s[i] != s[i - 1] && s[i] != s[i + 1])
        {
            cout << res - 1 << endl;
            return;
        }
    }
    cout << res << endl;
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