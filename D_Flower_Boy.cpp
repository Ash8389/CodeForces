#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
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

    unordered_map<int, int> mp;

    int i = 0, j = 0, f = 0;
    while (i < n && j < m)
    {
        int num_b = b[j];
        // cout << i << j << f << endl;
        while (a[i] < num_b)
        {
            // cout << a[i] << "->" << num_b << endl;
            // cout << "1:" << i << endl;
            i++;
            if (i >= n)
            {
                mp[b[j]] = -1;
                i = 0;
                f = 1;
                break;
            }
        }
        if (a[i] >= num_b)
        {
            // cout << "2:" << i << endl;
            i++;
        }
        j++;
    }

    int cnt = 0;
    int ans = 0;

    for (auto it : mp)
    {
        if (it.second == -1)
        {
            cnt++;
            ans = it.first;
        }
    }
    if (cnt >= 2)
    {
        cout << -1 << endl;
        return;
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