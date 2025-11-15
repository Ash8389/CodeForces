#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<ll>> a(m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int t;
            cin >> t;

            a[j].push_back(t);
        }
    }
    for (int i = 0; i < m; i++)
    {
        sort(a[i].begin(), a[i].end());
    }
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        vector<ll> suff(n + 1, 0);
        for (int j = n - 2; j >= 0; j--)
        {
            suff[j] = suff[j + 1] + a[i][j + 1];
        }
        for (int j = 0; j < n; j++)
        {
            ans += suff[j] - (n - j - 1) * a[i][j];
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