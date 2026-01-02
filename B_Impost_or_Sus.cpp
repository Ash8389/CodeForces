#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;

    if (s[0] == 'u')
    {
        cnt++;
        s[0] = 's';
    }
    if (s[s.size() - 1] == 'u')
    {
        cnt++;
        s[s.size() - 1] = 's';
    }

    int i = 1;
    while (i < s.size() - 1)
    {
        if (s[i] == 'u' && s[i + 1] == 'u')
        {
            cnt++;
            s[i + 1] = 's';
        }
        i++;
    }

    cout << cnt << "\n";
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