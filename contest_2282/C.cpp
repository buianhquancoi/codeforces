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
string to(ll n)
{
    string s;
    while (n)
    {
        s += (n % 2 + '0');
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
void sol()
{
    cin >> n;
    vector<ll> v(n + 1);
    ll x = 0;
    f(i, 1, n)
    {
        x ^= i;
    }
    string sx;
    f(i, 1, to(n).size() - to(x).size() + 1)
    {
        sx += '0';
    }
    sx += to(x);
    ll temp = pow(2,sx.size()-2);
    f(i,0,sx.size()-2)
    {
        if (sx[i] == '0')
        {
            v[temp] = 1;
            sx[i + 1] = (1 - (sx[i + 1] - '0')) + '0';
        }
        temp /= 2;
    }
    f(i, 1, n)
    {
        cout << v[i] << " ";
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