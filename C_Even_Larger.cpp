#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll op = 0;

    for (int i = 1; i < n; i += 2)
    {
        if (a[i] < a[i - 1])
        {
            op += abs(a[i - 1] - a[i]);
            a[i - 1] = a[i];
        }
        if (i + 1 < n && a[i] < a[i + 1])
        {
            op += abs(a[i + 1] - a[i]);
            a[i + 1] = a[i];
        }
        if (i + 1 < n && (a[i - 1] + a[i + 1]) > a[i])
        {
            ll extra = a[i - 1] + a[i + 1] - a[i];
            op += extra;
            a[i + 1] -= extra;
        }
    }

    cout << op << "\n";
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