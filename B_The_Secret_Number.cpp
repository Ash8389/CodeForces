#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans;

    for (ll i = 10; i + 1 <= n; i *= 10)
    {
        if (n % (i + 1) == 0)
        {
            ans.push_back(n / (i + 1));
        }
    }

    cout << ans.size() << endl;
    reverse(ans.begin(), ans.end());

    for (auto x : ans)
    {
        cout << x << " \n"[x == ans.back()];
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