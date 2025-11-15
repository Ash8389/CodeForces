#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> t(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    int mx = -1e9;
    int mn = 1e9;

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i] + t[i]);
        mn = min(mn, a[i] - t[i]);
    }

    printf("%.6f\n", (1.0 * (mx + mn) / 2));
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}