#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string q;
    string s;

    cin >> q >> s;

    int a1 = 0;
    string ans = "";

    for (int i = 0; i < q.size(); i++)
    {
        if (a1 < s.size() && (q[i] == '?' || q[i] == s[a1]))
        {
            ans += s[a1];
            a1++;
        }
        else if (a1 >= s.size() && q[i] == '?')
        {
            ans += 'a';
        }
        else
        {
            ans += q[i];
        }
    }
    if (a1 >= s.size())
    {
        cout << "YES" << "\n";
        cout << ans << "\n";
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