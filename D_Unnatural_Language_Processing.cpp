#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < n;)
    {
        if (i + 3 < n && s[i + 3] == 'a' || s[i + 3] == 'e')
        {
            ans += s.substr(i, 2);
            if (i + 2 < n)
            {
                ans += ".";
            }
            i += 2;
        }
        else
        {
            ans += s.substr(i, 3);
            if (i + 3 < n)
            {
                ans += ".";
            }
            i += 3;
        }
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