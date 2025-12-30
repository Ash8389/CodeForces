#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;

    int cnt_y = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'Y')
        {
            cnt_y++;
        }
    }

    if (cnt_y > 1)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
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