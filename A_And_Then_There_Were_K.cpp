#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    ll x = n & (n - 1);

    if (x == 0)
    {
        cout << n - 1 << "\n";
        return;
    }

    int bit_pos = -1;
    while (x > 0)
    {
        bit_pos++;
        x = x >> 1;
    }

    cout << ((1 << bit_pos) - 1) << "\n";
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