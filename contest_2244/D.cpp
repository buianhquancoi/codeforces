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
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
void boost()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
ll n, k, a[maxn], t, x, y, m, b[maxn];
string s;
vector<ll> v;
int main()
{
    file("test");
    boost();
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        f(i, 1, n)
        {
            cin >> a[i];
        }
        f(i, 1, m)
        {
            cin >> b[i];
        }
        b[m + 1] = 1e18;
        sort(b + 1, b + m + 1);
        ll i = 1, j = 1, sum = 0, res = 0;
        while (i <= n)
        {
            sum += a[i];
            if (i >= b[j])
            {
                j++;
                v.pb(sum);
                sum = 0;
            }
            i++;
        }
        for (ll x : v)
        {
            cerr << x << " ";
            res += abs(x);
        }
        cerr << endl;
        cout << res + sum << endl;
        v.clear();
    }
    cerr << "\nTime:" << TIME << "s.";
    return 0;
}