#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<ll> ai;
    ll res = 0;

    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= i)
        {
            continue;
        }

        res += ll(lower_bound(ai.begin(), ai.end(), a[i]) - ai.begin());
        ai.push_back(i);
    }

    cout << res << "\n";
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