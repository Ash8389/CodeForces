#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int odd = 0;
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            odd++;
        }
    }

    if (odd - 1 <= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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