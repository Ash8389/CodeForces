#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> u(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            u[a[i]] = 1;
    }
    int u_p = n;
    while (u_p >= 1 && u[u_p])
    {
        u_p--;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = u_p;
            u_p--;
        }
        while (u_p >= 1 && u[u_p])
        {
            u_p--;
        }
    }
    int l = 0;
    int r = n - 1;

    while (l < n && a[l] == l + 1)
    {
        l++;
    }
    while (r >= 0 && a[r] == r + 1)
    {
        r--;
    }
    if (r > l)
    {
        int len = r - l + 1;
        cout << len << "\n";
    }
    else
    {
        cout << 0 << "\n";
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
