#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll check(ll mid)
{
    ll cnt = powl(mid, 0.5);

    return (mid - cnt);
}
void solve()
{
    ll n;
    cin >> n;

    ll l = 0, h = (2 * n) + 10;
    ll ans = -1;

    while (l <= h)
    {
        ll mid = l + (h - l) / 2;

        if (check(mid) >= n)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << "\n";
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