#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mx = max(a[i][j], mx);
        }
    }
    vector<int> row(n, 0);
    vector<int> col(m, 0);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == mx)
            {
                row[i]++;
                col[j]++;
                total++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((row[i] + col[j] - (a[i][j] == mx)) == total)
            {
                cout << mx - 1 << endl;
                return;
            }
        }
    }

    cout << mx << endl;
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