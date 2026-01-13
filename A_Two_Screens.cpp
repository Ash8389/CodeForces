#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s, t;
    cin >> s >> t;

    int sz = min(s.size(), t.size());
    int i = 0;

    while (i < sz && s[i] == t[i])
    {
        i++;
    }
    int ans = (s + t).size();

    if (i > 0)
    {
        ans = ans - i + 1;
    }

    cout << ans << "\n";
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