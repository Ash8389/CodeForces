#include <bits/stdc++.h>
using namespace std;
typedef long ll;
void solve()
{
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<ll> m(n);

    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    ll pre = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(m[i] - pre) > b / a)
        {
            f -= b;
        }
        else
        {
            f -= (abs(m[i] - pre) * a);
        }

        if (f <= 0)
        {
            cout << "NO" << endl;
            return;
        }
        pre = m[i];
    }
    cout << "YES" << endl;
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