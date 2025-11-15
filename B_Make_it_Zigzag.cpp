#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll mx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (i & 1)
        {
            a[i] = max(a[i], mx);
        }
        mx = max(mx, a[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i += 2)
    {
        ll mn = LLONG_MAX;
        if (i - 1 >= 0)
        {
            mn = min(mn, a[i - 1]);
        }
        if (i + 1 < n)
        {
            mn = min(mn, a[i + 1]);
        }
        if (a[i] >= mn)
        {
            ans += a[i] - mn + 1;
        }
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