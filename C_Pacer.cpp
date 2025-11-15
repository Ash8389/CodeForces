// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void solve()
// {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> a(n, vector<int>(2));
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i][0] >> a[i][1];
//     }

//     int cnt = 0;
//     int bit = 0;
//     int ptr = 0;
//     for (int i = 1; i <= m; i++)
//     {
//         if (ptr < n && a[ptr][0] == i && a[ptr][1] == bit)
//         {
//             ptr++;
//             continue;
//         }
//         bit ^= 1;
//         cnt++;
//     }

//     cout << cnt << "\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    ll m;
    cin >> n >> m;

    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    vector<pair<ll, int>> v;
    v.push_back({0, 0});
    for (auto &p : a)
    {
        v.push_back(p);
    }

    ll cnt = 0;

    for (int i = 0; i + 1 < v.size(); i++)
    {
        ll s = v[i].first;
        int ps = v[i].second;
        ll e = v[i + 1].first;
        int pe = v[i + 1].second;

        ll d = e - s;
        if (d < 0)
        {
            cout << -1 << "\n";
            return;
        }
        if ((d % 2) == (ps ^ pe))
        {
            cnt += d;
        }
        else
        {
            cnt += d - 1;
        }
    }
    ll lt = v.back().first;
    if (lt > m)
    {
        cout << -1 << "\n";
        return;
    }
    if (lt < m)
    {
        cnt += (m - lt);
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
