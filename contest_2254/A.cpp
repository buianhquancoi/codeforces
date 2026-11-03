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
int main()
{
    file("test");
    boost();
    cin >> t;
    while (t--)
    {
        cin >> a[1] >> a[2] >> a[3];
        sort(a + 1, a + 4);
        ll res = 0;
        while (a[1] != a[2] && a[2] != a[3])
        {
            res++;
            a[3]--;
            a[1]++;
            sort(a + 1, a + 4);
        }
        cout << res << endl;
    }
    cerr << "\nTime:" << TIME << "s.";
    return 0;
}