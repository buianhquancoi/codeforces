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
ll n,k,a[maxn],b[maxn],t,cnta,cntb;
char s;
ll sol1(ll a[],ll b[],ll cnta , ll cntb)
{
    ll lap = 0;
    for (ll i = 1; i < n;i++)
    {
        if(b[i] == 1 && b[i+1] == 1)
        {
            lap += 2;
            i++;
        }
    }
    cerr << abs(cntb - cnta) - lap << endl;
    if ((abs(cntb - cnta)) % 2 == 0)
    {
        return max(0ll, abs(cntb - cnta) - lap);
    }
    return max(1ll, abs(cntb - cnta) - lap);
}
void sol()
{
    cin >> n;
    ll cnta = 0, cntb = 0;
    f(i, 1, n)
    {
        cin >> s;
        if(s == 'f')
        {
            a[i] = 1;
            cnta++;
        }
        else 
        {
            a[i] = 0;
        }
    }
    f(i, 1, n)
    {
        cin >> s;
        if (s == 'f')
        {
            b[i] = 1;
            cntb++;
        }
        else
        {
            b[i] = 0;
        }
    }
    cerr << cnta << " " << cntb << endl;
    if (cnta <= cntb)
    {
        cout << sol1(a, b,cnta,cntb) << endl;
        return;
    }
    cout << sol1(b, a,cnta,cntb) << endl;
}
int main()
{
    file("test");
    boost();
    cin >> t;
    while(t--)
        sol();
    cerr << "\nTime:" << TIME << "s.";
    return 0;
}