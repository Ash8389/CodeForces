#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<pair<int, int>> v;
    int cnt = 0;

    for (int i = 0; i < n - 2; i++)
    {
        string temp = s.substr(i, 3);
        if (temp == "pie" || temp == "map")
        {
            v.push_back({i, i + 2});
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cnt++;
        if (i + 1 < v.size() && v[i].second == v[i + 1].first)
        {
            i++;
        }
    }
    cout << cnt << endl;
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