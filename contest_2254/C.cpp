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
ll n, k, a[3][3], t, x, y, b[3][3];
string s1, s2;
void sol()
{
    cin >> n >> s1 >> s2;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for (int i = 0; i <= n - 1; i++)
    {
        a[i % 2][s1[i] - '0']++;
        b[i % 2][s2[i] - '0']++;
    }
    if (a[1][1] == b[1][1] && a[1][0] == b[1][0] && a[0][0] == b[0][0] && a[0][1] == b[0][1])
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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