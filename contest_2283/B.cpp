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
ll n,k,a[maxn],t,x,y;
string s;
void sol()
{
    cin >> n;
    ll res = 0,curr = 0;
    f(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    f(i,1,n)
    {
        curr = 1;
        f(j, i + 1, n)
        {
            if(a[j] % a[i] == 0)
            {
                curr++;
            }
        }
        res = max(res, curr);
    }
    cout << n - res << endl;
}
int main()
{
    file("test");
    boost();
    cin >> t;
    while(t--)
    {
        sol();
    }
    cerr << "\nTime:" << TIME << "s.";
    return 0;
}