#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    unordered_map<char, int> mp;

    for (int i = 1; i < n - 1; i++)
    {
        if (s[0] == s[i] || s[n - 1] == s[i])
        {
            cout << "YES" << endl;
            return;
        }
        mp[s[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second > 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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