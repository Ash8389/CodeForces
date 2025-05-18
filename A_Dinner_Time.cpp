#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, p, q;
    cin >> n >> m >> p >> q;

    int k = n / p;
    int r = n % p;

    if (r == 0)
    {
        if (k * q == m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
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