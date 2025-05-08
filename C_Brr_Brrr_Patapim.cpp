#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> arr(n + 1, vector<int>(n + 1));

    vector<int> vis(2 * n + 1, 0);
    vector<int> ans(2 * n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            if ((i + j) <= 2 * n)
            {
                ans[(i + j)] = arr[i][j];
                vis[arr[i][j]] = 1;
            }
        }
    }

    for (int i = 1; i <= 2 * n; i++)
    {
        if (vis[i] == 0)
        {
            ans[1] = i;
        }
    }

    for (int i = 1; i <= 2 * n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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