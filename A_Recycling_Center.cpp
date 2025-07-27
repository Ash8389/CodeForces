#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    ll mul = 2;
    ll ans = 0;
    ll i = 0;
    while (i < n && a[i] > k)
    {
        i++;
        ans++;
    }

    while (i < n)
    {
        i++;
        while (i < n && (a[i] * mul) > k)
        {
            i++;
            ans++;
        }
        mul *= 2;
    }

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
