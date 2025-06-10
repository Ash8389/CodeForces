#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
    }

    vector<int> v;

    for (auto it : mp)
    {
        v.push_back(it.second);
    }
    sort(v.begin(), v.end());

    int ans = 0;

    int i = 0;
    while (i < v.size() && v[i] == 1)
    {
        if (i % 2 == 0)
        {
            ans += 2;
        }
        i++;
    }
    while (i < v.size())
    {
        ans++;
        i++;
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