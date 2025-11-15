#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<ll>());

    ll c = min(n, m);
    ll ans = 0;
    for (ll i = 0; i < c; i++)
    {
        ans += a[i] * (m - i);
    }

    cout << ans << "\n";
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