#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;
    int l, r, g;
    vector<pair<int, pair<int, int>>> a;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r >> g;
        if (g <= c)
        {
            continue;
        }
        a.push_back({l, {r, g}});
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        int l = a[i].first;
        int r = a[i].second.first;
        int g = a[i].second.second;
        if (c < l || c > r || c >= g)
        {
            continue;
        }
        c = g;
    }
    cout << c << endl;
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