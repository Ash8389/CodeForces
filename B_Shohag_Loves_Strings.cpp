#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    string ans = "";
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            cout << s.substr(i - 1, 2) << endl;
            return;
        }
        if (i >= 2 && (s[i - 1] != s[i]) && (s[i - 2] != s[i]) && (s[i - 1] != s[i - 2]))
        {
            cout << s.substr(i - 2, 3) << endl;
            return;
        }
    }
    cout << -1 << endl;
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