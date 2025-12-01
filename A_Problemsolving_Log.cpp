#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> mp;
    for (auto ch : s)
    {
        mp[ch]++;
    }

    int res = 0;
    for (auto &pr : mp)
    {
        char ch = pr.first;
        int cnt = pr.second;

        if ((ch - 'A' + 1) <= cnt)
        {
            res++;
        }
    }

    cout << res << "\n";
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