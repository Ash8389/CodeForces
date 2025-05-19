#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string ans = "";
    int f = 0;

    char repChar;

    for (int i = 0; i < s.size(); i++)
    {
        if (i >= 1 && (s[i - 1] == s[i]) && f == 0)
        {
            repChar = s[i];
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (repChar != ch)
                {
                    ans += ch;
                    break;
                }
            }
            ans += s[i];
            f = 1;
        }
        else
        {
            ans += s[i];
        }
    }
    if (f == 0)
    {
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            if (s[s.size() - 1] != ch)
            {
                ans += ch;
                break;
            }
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