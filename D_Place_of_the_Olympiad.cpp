#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    ll l = 0;
    ll h = m;

    while (l + 1 < h)
    {
        ll mid = l + (h - l) / 2;

        if (((m / (mid + 1)) * mid + (m % (mid + 1))) * n >= k)
        {
            h = mid;
        }
        else
        {
            l = mid;
        }
    }

    cout << h << "\n";
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