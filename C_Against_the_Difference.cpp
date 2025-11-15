#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, vector<int>> p;
    p.reserve(n * 2);

    for (int i = 1; i <= n; ++i)
    {
        p[a[i]].push_back(i);
    }

    vector<vector<pair<int, int>>> end(n + 1);

    for (auto &pr : p)
    {
        int x = pr.first;
        auto &y = pr.second;
        int m = (int)y.size();
        if (x <= 0)
            continue;
        if (x > m)
            continue;
        for (int k = 0; k + x - 1 < m; k++)
        {
            int l = y[k];
            int r = y[k + x - 1];
            end[r].push_back({l, x});
        }
    }

    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1];
        for (auto &ie : end[i])
        {
            int j = ie.first;
            int k = ie.second;
            dp[i] = max(dp[i], dp[j - 1] + k);
        }
    }

    cout << dp[n] << endl;
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