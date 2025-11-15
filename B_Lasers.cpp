#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < y)
        {
            cnt++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (b[i] < x)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";
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