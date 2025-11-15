#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n);
    vector<int> cnt(m + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        a[i].resize(l);
        for (int j = 0; j < l; j++)
        {
            cin >> a[i][j];
            cnt[a[i][j]]++;
        }
    }
    bool c = true;
    for (int i = 1; i <= m; i++)
    {
        if (cnt[i] == 0)
        {
            c = false;
            break;
        }
    }
    if (!c)
    {
        cout << "NO\n";
        return;
    }
    int ne = 0;
    for (int i = 0; i < n; i++)
    {
        bool e = false;
        for (int x : a[i])
        {
            if (cnt[x] == 1)
            {
                e = true;
                break;
            }
        }
        if (!e)
        {
            ne++;
        }
    }
    if (ne >= 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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