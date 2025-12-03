#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll ans = -1;
    if (a % 2 == 0 && b % 2 == 0)
    {
        ll k = b / 2;
        ans = (a * k) + (b / k);
    }
    else if (a % 2 && b % 2)
    {
        ll k = b;
        ans = (a * k) + (b / k);
    }
    else if (a % 2 && b % 4 == 0)
    {
        ll k = b / 2;
        ans = (a * k) + (b / k);
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