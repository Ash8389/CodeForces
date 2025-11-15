#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> f;

void solve()
{
    ll n;
    cin >> n;

    ll ans = INT_MAX;

    for (ll i = 0; i < (1LL << 14); i++)
    {
        ll sum = 0;

        for (int j = 0; j < 14; j++)
        {
            if (i & (1 << j))
            {
                sum += f[j];
            }
        }
        if (sum <= n)
        {
            ll bit1 = __builtin_popcountll(i);
            ll bit2 = __builtin_popcountll(n - sum);

            ans = min(ans, bit1 + bit2);
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (ll i = 2, j = 1; j < (1e12 + 1); i++)
    {
        f.push_back(j);
        j *= i;
    }

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}