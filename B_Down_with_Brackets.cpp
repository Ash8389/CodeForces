#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }

        if (cnt == 0 && i < s.size() - 1)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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