#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int onecnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            onecnt++;
    }
    if (onecnt == 2)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    if (onecnt % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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