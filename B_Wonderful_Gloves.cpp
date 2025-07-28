#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> r(n);
    vector<ll> l(n);

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    vector<ll> a(n);
    vector<ll> b(n);

    for (int i = 0; i < n; i++)
    {
        a[i] = max(r[i], l[i]);
        ans += a[i];
        b[i] = min(r[i], l[i]);
    }
    ll m = k - 1;
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < m; i++)
    {
        ans += b[i];
    }

    ans += 1;

    cout << ans << endl;
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