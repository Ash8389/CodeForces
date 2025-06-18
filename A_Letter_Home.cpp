#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int r = 0;
    int l = 0;
    if (a[n - 1] > s)
    {
        r = a[n - 1] - s;
    }
    if (a[0] < s)
    {
        l = s - a[0];
    }

    if (r == 0 && l == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (r != 0 && l != 0)
    {
        if (r < l)
        {
            cout << 2 * r + l << endl;
        }
        else
        {
            cout << 2 * l + r << endl;
        }
        return;
    }
    if (r != 0)
    {
        cout << r << endl;
    }
    if (l != 0)
    {
        cout << l << endl;
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