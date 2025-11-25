#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != '<' && s[i + 1] != '>')
        {
            cout << -1 << "\n";
            return;
        }
    }

    int cntL = 0;
    int cntR = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            cntL++;
        }
        if (s[i] == '>')
        {
            cntR++;
        }
    }

    cout << s.size() - min(cntL, cntR) << "\n";
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