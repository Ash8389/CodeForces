#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n + 1), pre(n + 2, 0);
    ll sum = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    for (int i = 2; i < n + 2; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        ll tSum = sum;
        ll l, r, k;
        cin >> l >> r >> k;

        tSum -= pre[r + 1] - pre[l];
        tSum += (r - l + 1) * k;

        if (tSum & 1)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
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