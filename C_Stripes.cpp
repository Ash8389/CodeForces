#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    vector<string> a(8);

    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 8; i++)
    {
        bool ok = 1;
        for (int j = 0; j < 8; j++)
        {
            if (a[i][j] != 'R')
            {
                ok = 0;
                break;
            }
        }

        if (ok)
        {
            cout << "R\n";
            return;
        }
    }

    cout << "B\n";
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
