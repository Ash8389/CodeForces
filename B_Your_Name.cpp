#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    string s;
    string t;

    cin >> s >> t;

    vector<int> fs(26, 0);
    vector<int> ft(26, 0);

    for (int i = 0; i < n; i++)
    {
        fs[s[i] - 'a']++;
        ft[t[i] - 'a']++;
    }

    if (ft == fs)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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