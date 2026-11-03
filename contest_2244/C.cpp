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
ll n, k, a[maxn], t, x, y;
string s;

void sol()
{
    cin >> n >> x >> y;
    f(i, 1, n)
    {
        cin >> a[i];
    }
    if (is_sorted(a + 1, a + n + 1))
    {
        cout << "YES" << endl;
        return;
    }
    if (__gcd(x, y) == 1)
    {
        cout << "YES" << endl;
        return;
    }
    f(i, 1, __gcd(x, y))
    {
        for (ll j = i; j <= n; j += __gcd(x, y))
        {
            if (abs(a[j] - i) % __gcd(x, y) != 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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