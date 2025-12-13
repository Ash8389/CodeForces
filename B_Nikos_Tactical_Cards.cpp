#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll mn = 0, mx = 0;

    for (int i = 0; i < n; i++)
    {
        ll v1 = mn - a[i];
        ll v2 = mx - a[i];
        ll v3 = b[i] - mn;
        ll v4 = b[i] - mx;

        ll newMin = min({v1, v2, v3, v4});
        ll newMax = max({v1, v2, v3, v4});

        mn = newMin;
        mx = newMax;
    }

    cout << mx << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}